project(ptx-manufacturing-helper C)
set(CMAKE_C_STANDARD 11)

cmake_minimum_required(VERSION 3.10)

# Find libteec (OP-TEE Client API)
find_path(TEEC_INCLUDE_DIR tee_client_api.h)
find_library(TEEC_LIBRARY teec)

if (NOT TEEC_INCLUDE_DIR OR NOT TEEC_LIBRARY)
    message(FATAL_ERROR "libteec not found. Please install OP-TEE client library.")
endif()

add_compile_options(-Wall -Wextra -Wpedantic -Werror)

add_executable(ptx_manufacturing_helper main.c cid.c)

target_include_directories(ptx_manufacturing_helper PRIVATE
    ${TEEC_INCLUDE_DIR}
)

# Link libraries
target_link_libraries(ptx_manufacturing_helper
    ${TEEC_LIBRARY}
)

install(
    TARGETS ptx_manufacturing_helper
    DESTINATION ${CMAKE_INSTALL_BINDIR}
)
