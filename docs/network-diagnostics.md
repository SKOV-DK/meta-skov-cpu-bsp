# Ethernet Diagnostics in the Field

For service technicians on installed devices, and for anyone building a
diagnostic interface on these values - HMI screen, collector, diagnostic
architecture. See "For diagnostic interfaces" for what such a design must
respect.

- `ethtool` is expected in the product image. If it is missing, report it: the
  image is incomplete and the diagnosis cannot be done on site.
- Everything here only reads. The two exceptions, cable test and selftest,
  interrupt the link for a few seconds. No setting is changed.
- `$IFACE` is the port you are working on.

Typical field faults: damaged or crushed cable, loose or dirty connector, cable
routed next to motors or frequency converters, cable too long or of the wrong
type, dead device at the far end, wrong socket patched.

## Start here

```
:~ ip -br link
lo          UNKNOWN  00:00:00:00:00:00 <LOOPBACK,UP,LOWER_UP>
end0        UP       00:0e:cd:02:fd:94 <BROADCAST,MULTICAST,UP,LOWER_UP>
lan1@end0   UP       00:0e:cd:02:fd:93 <BROADCAST,MULTICAST,UP,LOWER_UP>
lan2@end0   DOWN     00:0e:cd:02:fd:94 <NO-CARRIER,BROADCAST,MULTICAST,UP>
```

- `lan1`, `lan2` - the sockets. Work on these.
- `@end0` - they run through `end0`, the on board bus between processor and
  switch chip. No socket, cable or PHY.
- `LOWER_UP` = link is up. `NO-CARRIER` = port on, nothing on the wire.

`end0` can only be tested by counters and by data passing between the external
ports and the CPU - see the selftest in Case 2. Cable test, SQI and MSE do not
apply: there is no twisted pair and no PHY. Its `Link detected: yes` is a fixed
description, not a measurement, and stays `yes` even if the bus were broken -
which it can be, through cracked solder or a damaged trace.

```
ethtool -I $IFACE
```

Always `-I`: same output as plain `ethtool` plus the link down counter.

```
	Speed: 1000Mb/s           <- expected speed?
	Duplex: Full              <- must be Full
	MDI-X: Unknown            <- resolved state not reported, not a fault
	Link detected: yes        <- is there a link at all?
	SQI: 7/7                  <- signal margin, needs traffic
	Link Down Events: 1       <- must not grow
```

`MDI-X: Unknown` only means the hardware does not report which crossover the
automatic detection chose. Straight and crossed cables both work.

**`Speed` 10Mb/s or `Duplex` Half?** Read "Special case: the far end is
obsolete" first - several diagnostics do not work there.

Have the baseline for this port at hand if one was recorded, see "Record a
baseline at installation". Most readings mean little alone and a lot in
comparison.

Now pick the case:

| What you see                       | Go to                        | Seen   |
|------------------------------------|------------------------------|--------|
| no link at all                     | Case 1                       | often  |
| link up, but nothing gets through  | Case 2                       | rarely |
| link and data work, frames lost    | Case 3b                      | often  |
| link drops, comes back by itself   | Case 3a - open               | rarely |

Support is called when the system does **not** recover on its own: Case 1, or
Case 3b. A link that flaps and returns within seconds usually never reaches
anyone. Case 2 is rare because the link came up - cable and both PHYs already
proved they work.

Cable test belongs to case 1. The selftest cannot even run there and belongs to
case 2. SQI and MSE need a live link with traffic, which only case 3 has.

## Case 1: no link at all

`Link detected: no`, no LEDs, device unreachable. The typical support case: the
link was working and now stays down until someone intervenes.

**Capture before you touch anything.** Re-seating a plug destroys the proof that
it was loose:

```
ethtool -I $IFACE            # link state, link down events
dmesg | tail -30             # when it went down, how often
ethtool --cable-test $IFACE  # verdict on the cable, only possible while down
ethtool -S $IFACE            # counters
```

Then work through:

1. **Far end powered?** Port LED lit? A dead partner looks exactly like a broken
   cable.
2. **Re-seat both plugs.** Listen for the latch. Half inserted plugs and broken
   latch clips are the most common cause of all.
3. **Test the cable** - but read the next paragraph before believing it.

```
ethtool --cable-test $IFACE
```

**Not a verdict on the cable.** A moment view of what the PHY sees now,
depending as much on the far end as on the cable. It becomes an answer only
against a reference from when the installation was good.

```
Pair A code OK, source: TDR              | healthy cable, partner present
Pair B code OK, source: TDR
Pair C code OK, source: TDR
Pair D code OK, source: TDR

Pair A code Open Circuit, source: TDR    | broken or unplugged
Pair A, fault length: 2.80m, source: TDR
Pair B code Open Circuit, source: TDR
Pair B, fault length: 0.40m, source: TDR
```

Rule of thumb:

- **`OK` everywhere** - cable probably healthy.
- **Anything else** - that pair is probably not healthy, *unless it is so by
  design*: a 10 or 100 Mbit far end uses only two pairs, so C and D read as open
  or shorted on a perfectly good cable.

Details:

| Result                    | Means                                        |
|---------------------------|----------------------------------------------|
| Open Circuit on all pairs | nothing connected, cable cut, partner dead   |
| Open or Short on some     | damaged cable or connector - unless the far  |
|                           | end does not use those pairs                 |
| all OK, still no link     | cable probably fine, or too long to measure  |

- **Fault length** resolves to about 0.8 to 1 m. An unplugged port reports
  anything between 0 and 3 m. Good enough to decide "near the device" or "out in
  the field", not which metre to cut.
- **`OK` on a long cable proves less.** The echo weakens with distance; beyond a
  certain length an open end is no longer detectable and reads as `OK`. Faults
  near the device stay visible.
- Shorts between pairs and to ground often show up as `Open Circuit`.

**No pair lines at all?** The measurement failed - that is not a good cable.
`ethtool` still exits 0:

```
:~ ethtool --cable-test lan2
Cable test started for device lan2.
Cable test completed for device lan2.
[kernel] Microchip KSZ9477 ...: cable_test_wait_for_completion failed: -110
```

The TDR needs the pair quiet for a moment to hear its own echo. Autonegotiation
provides that - short periodic bursts, moved around by automatic MDI-X. A forced
link does not: at 10 Mbit the partner drives the pair continuously and the
measurement never gets a window.

Fix: unplug the far end, or have its port disabled. Both were measured to work.
An open cable still shows opens and shorts; you only lose the "OK means a
powered partner" part.

Scripts must check for the pair lines, not the exit code.

**Same cable, three far ends** - all measured on one device:

| Far end                          | Result                            |
|----------------------------------|-----------------------------------|
| gigabit partner, autonegotiating | A, B, C, D all OK                 |
| partner forced to 10 Mbit half   | no pair lines, times out          |
| 100 Mbit partner, port disabled  | A, B, C OK, D `Short within Pair` |

The last one is the trap: a healthy cable, reproducibly reported as shorted,
because the 100 Mbit partner does not use that pair. Without a reference someone
re-terminates a good cable.

**A pair that changed against the reference is a finding. A pair that always
looked like that is the installation.**

## Case 2: link is up, but no data passes

Link up at the expected speed, but nothing arrives.

**Rare in the field, and rarely the cable** - a link that came up proves cable
and both PHYs. In order of likelihood:

1. **Software configuration** - routing first, then addressing, VLANs, firewall,
   the switch or server at the far end.
2. **A driver problem** - less likely.
3. **Damage on the board** - least likely.

One measurement separates 2 and 3 from 1:

```
ethtool -t $IFACE
```

Run it on `lan1` or `lan2`, never on `end0`. It loops frames from the processor
through the MAC, the on board bus and the switch into the port PHY and back. It
tests that path and nothing else - not the cable or the connectors.

| Result                    | Means                                          |
|---------------------------|------------------------------------------------|
| `The test result is PASS` | data path fine - it is configuration           |
| FAIL on a linked port     | driver or board                                |

The carrier requirement is an implementation detail - can be changed with
different kernel version.

- `Link detected: yes` at the expected speed, `Duplex: Full`
- `Link Down Events` stable
- SQI 6/7 or 7/7 under traffic
- error counters not growing
- `ethtool -t` PASS

## Case 3a: drops now and then - to be investigated

A link that drops and comes back within seconds rarely triggers a support call:
the system recovers on its own. The cases that reach support are the ones where
it does **not** recover - see Case 1 and Case 2.

Sketch of the approach, not worked out yet:

- Source is usually unknown. Not every EMI source is visible: a motor two rooms
  away, a contactor on the same tray, a welder on the late shift.
- Cheap checks: wiggle the cable at both plugs while watching
  `Link Down Events`, check the route against motors and converters, check
  strain relief, check the far end and its power.
- Otherwise measure long term and find **when** it happens - the timestamp names
  the machine cycle or shift that causes it. Log MSE per pair if available, SQI
  otherwise, alongside `Link Down Events` and the error counters. Keep traffic
  running: both read perfect on a quiet line. Plot the series.
- Packet loss over time cannot be logged on one side alone, because frames
  destroyed on the wire are counted nowhere (see 3b). It needs counters from
  both ends, synchronised timestamps and storage - **tooling that does not exist
  yet, out of scope here**.

## Case 3b: frames are lost, the link stays up - to be elaborated

Slow transfers, timeouts, retries. Often invisible to the customer, who only
reports "it is slow" or nothing at all, so this rarely arrives as a clear fault
report. Condensed here; can be worked out further when needed.

**Speed** - `Speed: 100Mb/s` where 1000 is expected almost always means two
broken pairs: damaged cable or a plug crimped on four wires. Cable test, then
replace or re-terminate. Some PHYs support speed down shifiting on noisy link.

**Signal margin** - SQI (whole link, 0 to 7, higher is better) and MSE (per
wire pair, lower is better, 100 Mbit and up).

```
ping -A -s 1400 -q <partner IP> > /dev/null &   # or iperf3, PC at far end
sleep 5
ethtool -I $IFACE | grep SQI
sh mse-sample.sh $IFACE 1
kill %1
```

| SQI          | Means                                            |
|--------------|--------------------------------------------------|
| 7/7 or 6/7   | healthy                                          |
| 5/7 or 4/7   | degraded - cable damage, length, or noise nearby |
| 3/7 or below | about to drop - replace the cable now            |

`mse-sample.sh` output, per channel min/mean/max plus two summary numbers:

```
  worst channel : c (mean 2.0), best b (mean 1.5), spread 0.5
  signal seen   : 0.0002 s of 0.96 s wall clock (0.017 % duty)
```

- **spread** - worst channel above best. Large spread points at one
  damaged pair.
- **duty** - how much time was really observed. A quiet result is no proof.
- One `--show-mse` read covers microseconds; always sample.
- SQI is computed from the same registers - 40 samples, worst channel, mapped to
  0 to 7. The two can never contradict each other.

**Error counters** - three sources, some counters are overlapping:

```
ip -s -s link show dev $IFACE      # standard interface statistics, per port
ethtool -S $IFACE --all-groups     # standardized, here only phydev-RxErrors
ethtool -S $IFACE                  # driver specific
```

**How each counter is triggered and which error case it covers still has to be
investigated.** Collect them for the report; do not interpret them on site.

```
:~ ip -s -s link show dev lan1
    RX:  bytes packets errors dropped  missed   mcast
      56125777   49119      0       0       0      21
    RX errors:  length    crc   frame    fifo overrun
                     0      0       0       0       0
    TX:  bytes packets errors dropped carrier collsns
      27692585   35236      3      25       0       0
    TX errors: aborted   fifo  window heartbt transns
                     0      3       0       0       7
```

Where the numbers come from:

- `lan1`, `lan2` - ports with integrated PHYs. Exactly one PHY counter is
  exposed through ethtool, `phydev-RxErrors`; everything else arrives as the
  standard interface statistics above.
- `end0` - the SoC MAC counters, prefix `mmc_`, **plus** counters with prefix
  `s00_p02_`, which belong to the switch port attached to the SoC, not to the
  SoC MAC.
- `mmc_rx_oversize_g` and `mmc_tx_oversize_g` grow in normal operation: the
  switch tag pushes full size frames past the standard maximum. Measured 200
  full size pings, exactly +200, all error counters zero.

**Loss without any counter** - frames can disappear with every error counter at
zero on both ends: noise that destroys the preamble means no frame was ever
framed, so nothing counts it. Measured here: 5 percent of pings lost in one
direction, all counters clean. Only comparing packet counts along the path finds
it - port MAC (`ethtool -S lan1`), conduit (`ethtool -S end0`), stack
(`ip -s link`), application (`ping`, `iperf3 -u`) - and the far end, which
usually has no readable counters. Then loss can be proven but not located.

## Special case: the far end is obsolete

Old hubs and switches are still in service. The link then falls back to 10 Mbit,
half duplex, usually without autonegotiation. **Read this before judging the
product** - three diagnostics stop working.

```
	Link partner advertised link modes:  10baseT/Half
	Link partner advertised auto-negotiation: No   <- legacy partner
	Speed: 10Mb/s
	Duplex: Half
	Link Down Events: 3
```

No `SQI` line at all - it is not reported at 10 Mbit.

| Diagnostic        | Normal link  | 10 Mbit half duplex partner    |
|-------------------|--------------|--------------------------------|
| SQI               | `SQI: 7/7`   | line absent                    |
| `--show-mse`      | per pair MSE | `Operation not supported`      |
| `--cable-test`    | pair results | no results, times out, exit 0  |
| `ethtool -t`      | PASS         | FAIL, `-110` on loopback tests |
| `phydev-RxErrors` | works        | works                          |

So on such a link: a missing SQI line is **not** a fault, a cable test without
results is **not** a cable verdict, and `ethtool -t` FAIL with `-110` is **not**
a broken product.

Measured on such a link: 128 collisions and 8 excessive collisions - frames
given up after 16 attempts - at almost no load; 2.5 ms round trip instead of
0.36 ms; 5 percent of packets lost in one direction with **every error counter
on both ends at zero**.

Treat the obsolete partner as the fault and replace it. 10 Mbit half duplex is
barely exercised in today's hardware and drivers, so odd behaviour is expected
there. The product cannot be judged on such a link - connect it to a current
switch or a laptop to test it.

## Record a baseline at installation

Every reading here is relative: the cable test is a moment view, SQI and MSE
depend on cable, length and environment, counters only count upwards. Record
once per port at commissioning, with normal traffic running

TODO

## For scripts: JSON output

Do not scrape text output. `--json` works for `-I`, `-S`, `--show-mse` and more,
and returns typed values:

```
:~ ethtool --json -I lan1 | jq -c '.[0] | {speed, duplex, sqi}'
{"speed":1000,"duplex":"Full","sqi":6}
```

It also shows structure the text output hides - here the empty standardized
groups:

```
:~ ethtool --json -S lan1 --all-groups
[ { "ifname": "lan1", "eth-phy": {}, "eth-mac": {}, "eth-ctrl": {},
    "rmon": {}, "phydev": { "RxErrors": 0 } } ]
```

## Command summary

| Command                          | Tells you                            |
|----------------------------------|--------------------------------------|
| `ip -br link`                    | which ports exist and their state    |
| `ethtool -I $IFACE`              | link, speed, duplex, SQI, link downs |
| `ethtool --cable-test $IFACE`    | open/short per pair, rough distance  |
| `ethtool --show-mse $IFACE`      | signal margin per wire pair          |
| `ethtool -S $IFACE --all-groups` | receive errors seen by the port chip |
| `ethtool -S $IFACE`              | driver specific error counters       |
| `ethtool -t $IFACE`              | is the data path in the device ok?   |

`--cable-test` and `-t` interrupt the link.

## Platform annex: imx8-cpu

Driver specific output has to be checked per platform. Verify after a hardware
change or kernel update; on another platform the names differ.

| Component                                    | Driver        | Interface     |
|----------------------------------------------|---------------|---------------|
| i.MX8MP EQOS MAC, DWMAC4/5, RGMII, 30bf0000  | `imx-dwmac`   | `end0`        |
| KSZ9893 3 port gigabit switch, I2C 0x5f, DSA | `ksz9477`     | `lan1` `lan2` |
| Two switch integrated gigabit PHYs           | `KSZ9477` PHY | `lan1` `lan2` |

`ethtool -i` reports `st_gmac` for the conduit and `dsa` for the switch ports.
Re-check with:

```
ethtool -i end0
dmesg | grep -iE 'ksz|dwmac'
readlink /sys/bus/mdio_bus/devices/*/driver
```

MSE: four channels, refresh 2000000 ps, 250 symbols per sample, worst value 127.
Needs 100 Mbit or faster. Version requirements:

| Part        | First version | Change                                   |
|-------------|---------------|------------------------------------------|
| kernel core | 6.19          | `ETHTOOL_MSG_MSE_GET` and PHY MSE access |
| PHY driver  | 6.19          | MSE for the KSZ9477 family               |
| `ethtool`   | 7.0           | the `--show-mse` command                 |

An older `ethtool` does not know the option; an older kernel answers `Operation
not supported` on every port. SQI is the fallback.

## Reference

- Kernel documentation, Twisted Pair Layer 1 diagnostics:
  https://docs.kernel.org/networking/diagnostic/twisted_pair_layer1_diagnostics.html
