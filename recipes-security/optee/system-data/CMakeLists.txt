cmake_minimum_required(VERSION 3.10)
project(system-data LANGUAGES C)

include(GNUInstallDirs)
find_package(PkgConfig REQUIRED)
pkg_check_modules(CRYPTO REQUIRED libcrypto)

pkg_check_modules(TEEC teec)
if(TEEC_FOUND)
	add_executable(system-data main.c)
	target_include_directories(system-data PRIVATE ${TEEC_INCLUDE_DIRS})
	target_link_libraries(system-data ${TEEC_LIBRARIES})
	target_link_directories(system-data PRIVATE ${TEEC_LIBRARY_DIRS})

	install(TARGETS system-data RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
endif()
