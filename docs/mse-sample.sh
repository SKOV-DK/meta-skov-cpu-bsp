#!/bin/sh
#
# mse-sample.sh - sample the per pair MSE of an Ethernet port and summarise it.
#
# A single "ethtool --show-mse" read is one hardware snapshot averaged over
# "Symbols per Sample" symbols, so it covers only microseconds of signal.
# Disturbances are bursty and a single read walks past them. This script reads
# the capabilities of the port, works out how many reads fit into the requested
# wall clock time, samples, and reports what the channels did.
#
# All ethtool calls use --json, which is stable machine readable output. Text
# output is meant for humans and may be reformatted at any time.
#
# Usage: mse-sample.sh <iface> [seconds]        default: 1 second
#
# Exit codes: 0 measured, 1 usage or interface problem, 2 MSE not usable here.

set -u

IFACE=${1:-}
DURATION=${2:-1}

if [ -z "$IFACE" ]; then
	echo "usage: $0 <iface> [seconds]" >&2
	exit 1
fi

if [ ! -d "/sys/class/net/$IFACE" ]; then
	echo "$0: no such interface: $IFACE" >&2
	exit 1
fi

# Read one scalar out of ethtool --json output. Keys are unique enough at the
# level we need, and awk sees the key as the first field of its own line.
json_val() {
	awk -v key="\"$1\":" '$1 == key {
		v = $2
		gsub(/[",]/, "", v)
		print v
		exit
	}'
}

# --- preconditions -----------------------------------------------------------

LINKINFO=$(ethtool --json -I "$IFACE" 2>/dev/null)
LINK=$(echo "$LINKINFO"   | json_val link-detected)
SPEED=$(echo "$LINKINFO"  | json_val speed)
DUPLEX=$(echo "$LINKINFO" | json_val duplex)
SQI=$(echo "$LINKINFO"    | json_val sqi)
SQIMAX=$(echo "$LINKINFO" | json_val sqi-max)

if [ -n "$SQI" ] && [ -n "$SQIMAX" ]; then
	SQI="$SQI/$SQIMAX"
else
	SQI="not reported"
fi

if [ "$LINK" != "true" ]; then
	echo "$0: no link on $IFACE, nothing to measure" >&2
	exit 2
fi

if [ -z "$SPEED" ] || [ "$SPEED" -lt 100 ]; then
	echo "$0: MSE needs 100 Mbit or faster, $IFACE runs at ${SPEED:-?} Mbit" >&2
	echo "$0: an obsolete link partner is the usual reason" >&2
	exit 2
fi

CAPS=$(ethtool --json --show-mse "$IFACE" 2>&1)
if ! echo "$CAPS" | grep -q "average-mse"; then
	echo "$0: MSE not available on $IFACE:" >&2
	echo "$CAPS" | sed 's/^/    /' >&2
	exit 2
fi

REFRESH=$(echo "$CAPS" | json_val refresh-rate-ps)
SYMBOLS=$(echo "$CAPS" | json_val symbols-per-sample)
MAXMSE=$(echo "$CAPS"  | json_val max-average-mse)

# --- work out how many reads fit into the requested time ---------------------

CAL=10
T0=$(date +%s.%N)
i=0
while [ $i -lt $CAL ]; do
	ethtool --json --show-mse "$IFACE" >/dev/null 2>&1
	i=$((i + 1))
done
T1=$(date +%s.%N)

COUNT=$(awk -v a="$T0" -v b="$T1" -v n="$CAL" -v d="$DURATION" 'BEGIN {
	per = (b - a) / n
	c = (per > 0) ? int(d / per) : 100
	if (c < 20)   c = 20
	if (c > 5000) c = 5000
	print c
}')

# --- sample ------------------------------------------------------------------

OUT=$(mktemp) || exit 1
trap 'rm -f "$OUT"' EXIT

RX0=$(cat "/sys/class/net/$IFACE/statistics/rx_packets")
TX0=$(cat "/sys/class/net/$IFACE/statistics/tx_packets")
S0=$(date +%s.%N)

i=0
while [ $i -lt "$COUNT" ]; do
	ethtool --json --show-mse "$IFACE"
	i=$((i + 1))
done >"$OUT"

S1=$(date +%s.%N)
RX1=$(cat "/sys/class/net/$IFACE/statistics/rx_packets")
TX1=$(cat "/sys/class/net/$IFACE/statistics/tx_packets")

WALL=$(awk -v a="$S0" -v b="$S1" 'BEGIN { printf "%.2f", b - a }')
RXD=$((RX1 - RX0))
TXD=$((TX1 - TX0))

# --- report ------------------------------------------------------------------

echo "MSE sample of $IFACE"
echo "  link      : $SPEED Mbit $DUPLEX, SQI $SQI"
echo "  hardware  : $SYMBOLS symbols per sample, refresh $REFRESH ps," \
     "worst $MAXMSE"
echo "  sampling  : $COUNT reads in ${WALL} s"
echo "  traffic   : $RXD frames received, $TXD sent during the measurement"

if [ "$RXD" -lt 100 ]; then
	echo "  WARNING   : almost no traffic - MSE is measured during reception,"
	echo "              so these values say little. Generate load and repeat."
fi

echo

awk -v maxmse="$MAXMSE" -v refresh="$REFRESH" -v wall="$WALL" '
$1 == "\"channel\":"     { c = $2; gsub(/[",]/, "", c) }
$1 == "\"average-mse\":" {
	v = $2
	gsub(/[",]/, "", v)
	v = v + 0
	n[c]++
	sum[c] += v
	if (!(c in min) || v < min[c]) min[c] = v
	if (!(c in max) || v > max[c]) max[c] = v
	if (v >= maxmse / 4) hot[c]++
}
END {
	printf "  %-8s %8s %8s %8s %8s %10s\n",
	       "channel", "samples", "min", "mean", "max", "elevated"
	worst = -1; best = -1; chans = 0; total = 0
	for (c in n) {
		mean = sum[c] / n[c]
		printf "  %-8s %8d %8d %8.1f %8d %10d\n",
		       c, n[c], min[c], mean, max[c], hot[c] + 0
		if (worst < 0 || mean > worstv) { worst = 1; worstv = mean; worstc = c }
		if (best  < 0 || mean < bestv)  { best  = 1; bestv  = mean; bestc  = c }
		total += n[c]
		chans++
	}
	printf "\n"
	printf "  worst channel : %s (mean %.1f), best %s (mean %.1f), spread %.1f\n",
	       worstc, worstv, bestc, bestv, worstv - bestv

	if (chans < 1) chans = 1
	observed = total / chans * refresh / 1e12
	duty = 0
	if (wall > 0) duty = observed / wall * 100
	printf "  signal seen   : %.4f s of %.2f s wall clock (%.3f %% duty)\n",
	       observed, wall, duty
	printf "  scale         : 0 is perfect, %d is the worst reported\n",
	       maxmse
}
' "$OUT"

cat <<'EOF'

  How to read this:
    - lower is better, single digit means are healthy
    - one channel clearly above the others points at that wire pair:
      damaged pair, bad contact in the plug, or a poor crimp
    - "elevated" counts samples at or above a quarter of the worst value;
      a channel with a low mean but elevated samples is being disturbed
      in bursts, which is typical for EMI
    - the duty cycle shows how little of the time was actually observed;
      a quiet result is not proof that nothing happens in between
    - there is no absolute pass/fail limit: compare the channels against
      each other, and against a value recorded when the link was known good
EOF
