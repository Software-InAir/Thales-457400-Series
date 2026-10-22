cmake_minimum_required(VERSION 3.16)
project(Thales VERSION 1.0 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(Thales
        main.cpp
        main.h

)

# 1. Include Directories (Added the standard VISA include path)
target_include_directories(Thales PRIVATE
        "C:/Excalibur/4000PCI Family Software Tools/Source/include"
        "C:/Excalibur/429RTx Software Tools/Source/include"
        "C:/Program Files/IVI Foundation/VISA/Win64/Include"
        "C:/Program Files (x86)/National Instruments/NI-DAQ/DAQmx ANSI C Dev/include"
)

target_compile_definitions(Thales PRIVATE EXP_WIN32 _WIN64)

# 2. Find Excalibur Libraries
find_library(EXCALIBUR_LIB_X64
        NAMES Exc4000Ms
        PATHS "C:/Excalibur/4000PCI Family Software Tools/Source/lib/excMSVisual/x64/Release"
        REQUIRED
)

find_library(EXCALIBUR_429_LIB
        NAMES Exc429RtxMs
        PATHS "C:/Excalibur/429RTx Software Tools/Source/lib/excMSVisual/x64/Release"
)

# 3. Find VISA Library
find_library(VISA_LIB_X64
        NAMES visa64 Visa64
        PATHS "C:/Program Files/IVI Foundation/VISA/Win64/Lib_x64/msc"
        REQUIRED
)

#4. Find DAQMX Library
find_library(DAQMX_LIB_X64
        NAMES NIDAQmx
        PATHS "C:/Program Files (x86)/National Instruments/Shared/ExternalCompilerSupport/C/lib64/msvc"
        REQUIRED
)

# 4. Link Libraries
target_link_libraries(Thales PRIVATE
        Qt6::Widgets
        Qt6::Core
        ${EXCALIBUR_LIB_X64}
        ${VISA_LIB_X64}
        ${DAQMX_LIB_X64}
)

if(EXCALIBUR_429_LIB)
    target_link_libraries(Thales PRIVATE ${EXCALIBUR_429_LIB})
endif()

qt_finalize_executable(Thales)