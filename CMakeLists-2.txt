cmake_minimum_required(VERSION 3.16)

project(radarScanLocalConsole VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS
    Core
    Network
    WebSockets
    DBus
)

find_package(PkgConfig REQUIRED)

if(UNIX AND NOT APPLE)
    pkg_check_modules(LIBNL REQUIRED libnl-3.0 libnl-genl-3.0)
endif()

qt_standard_project_setup()

set(SOURCES
    main.cpp
    appcontroller.cpp
    appcontroller.h

    socketioclient.cpp
    socketioclient.h
    socketeventworker.cpp
    socketeventworker.h
    configmanager.cpp
    configmanager.h
    networksetting.cpp
    networksetting.h
    utilities.cpp
    utilities.h
    systemdmonitorqt.cpp
    systemdmonitorqt.h
)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    list(APPEND SOURCES
        NetworkMonitorQt.h
        NetworkMonitorQt.cpp
        networkmonitor.h
        networkmonitor.cpp
    )
endif()

qt_add_executable(radarScanLocalConsole
    ${SOURCES}
)

target_include_directories(radarScanLocalConsole
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${LIBNL_INCLUDE_DIRS}
)

if(UNIX AND NOT APPLE)
    message(STATUS "Linux build detected (RPi 5) - console/headless mode")

    target_link_libraries(radarScanLocalConsole PRIVATE
        ${LIBNL_LIBRARIES}
    )

    target_compile_definitions(radarScanLocalConsole PRIVATE PLATFORM_LINUX)
elseif(APPLE)
    message(STATUS "macOS build detected - console/headless mode")
    target_compile_definitions(radarScanLocalConsole PRIVATE PLATFORM_MACOS)
endif()

target_link_libraries(radarScanLocalConsole PRIVATE
    Qt6::Core
    Qt6::Network
    Qt6::WebSockets
    Qt6::DBus
)

target_compile_options(radarScanLocalConsole PRIVATE
    ${LIBNL_CFLAGS_OTHER}
)
