cmake_minimum_required(VERSION 3.20)

project(Thales
        VERSION 0.1.0
        LANGUAGES CXX
)

if(MSVC)
    add_compile_options(/permissive-) # Enforces standard compliance while acknowledging MSVC extensions
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "C:/Qt6/6.9.1/msvc2022_64")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)


add_executable(Thales
        main.cpp
        main.h
        main.h
        serial.cpp
        serial.h

)

target_link_libraries(Thales
        PRIVATE
        Qt6::Widgets
        Qt6::Core
)

target_include_directories(Thales PRIVATE "C:\\Excalibur\\4000PCI Family Software Tools\\Source\\include")
target_include_directories(Thales PRIVATE "C:\\Excalibur\\429RTx Software Tools\\Source\\include")

target_compile_definitions(Thales PRIVATE EXP_WIN32 _WIN64)

find_library(EXCALIBUR_LIB_X64
        NAMES Exc4000Ms
        PATHS "C:\\Excalibur\\4000PCI Family Software Tools\\Source\\lib\\excMSVisual\\x64\\Release"
        REQUIRED
)

find_library(EXCALIBUR_429_LIB
        NAMES Exc429RtxMs
        PATHS "C:\\Excalibur\\429RTx Software Tools\\Source\\lib\\excMSVisual\\x64\\Release"
)

if(EXCALIBUR_429_LIB)
    target_link_libraries(Thales PRIVATE ${EXCALIBUR_429_LIB})
endif()

target_link_libraries(Thales PRIVATE ${EXCALIBUR_LIB_X64})



qt_finalize_executable(Thales)