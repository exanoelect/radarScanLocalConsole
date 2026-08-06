cmake_minimum_required(VERSION 3.16)

project(radarScanLocal VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Temukan modul Qt6 yang diperlukan
find_package(Qt6 REQUIRED COMPONENTS
    Widgets
    SerialPort
    Network
    #Multimedia
    WebSockets
    Core
    DBus
    Mqtt
)

# libnl (netlink)
find_package(PkgConfig REQUIRED)

if(UNIX AND NOT APPLE)
    pkg_check_modules(LIBNL REQUIRED libnl-3.0 libnl-genl-3.0)
endif()

# Jika pakai .ui file
qt_standard_project_setup()

# Kumpulkan file sumber
set(SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui

    socketioclient.cpp
    socketioclient.h
    socketeventworker.h
    socketeventworker.cpp
    configmanager.h
    configmanager.cpp
    networksetting.h
    networksetting.cpp
    utilities.h
    utilities.cpp
    systemdmonitorqt.h
    systemdmonitorqt.cpp

)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    list(APPEND SOURCES
        NetworkMonitorQt.h
        NetworkMonitorQt.cpp
        networkmonitor.h
        networkmonitor.cpp
    )
endif()

# Generate executable
qt_add_executable(radarScanLocal
    ${SOURCES}
)

# Include path
target_include_directories(radarScanLocal
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${LIBNL_INCLUDE_DIRS}
)

# ===== Platform detection =====
if(UNIX AND NOT APPLE)
    message(STATUS "Linux build detected (RPi 5) — linking gpiod + libnl")

    target_link_libraries(radarScanLocal PRIVATE
        ${LIBNL_LIBRARIES}
    )

    target_compile_definitions(radarScanLocal PRIVATE PLATFORM_LINUX)

elseif(APPLE)
    message(STATUS "macOS build detected — gpiod stub mode")

    target_compile_definitions(radarScanLocal PRIVATE PLATFORM_MACOS)
endif()

# Link Qt modules (common)
target_link_libraries(radarScanLocal PRIVATE
    Qt6::Widgets
    Qt6::Network
    Qt6::WebSockets
    Qt6::Core
    Qt6::DBus
)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_link_libraries(radarScanLocal PRIVATE pulse)
endif()

# Tambahan compile flags dari pkg-config
target_compile_options(radarScanLocal PRIVATE
    ${LIBNL_CFLAGS_OTHER}
)

# macOS bundle settings
if(APPLE)
    set_target_properties(radarScanLocal PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_GUI_IDENTIFIER "com.example.myqt6app"
        MACOSX_BUNDLE_BUNDLE_NAME "radarScanLocal"
    )
endif()
