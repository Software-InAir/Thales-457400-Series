cmake_minimum_required(VERSION 3.20)

project(Thales
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "C:/Qt6/6.9.1/msvc2022_64/bin")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(Thales
        main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/main.h
        main.h

)

target_link_libraries(Thales
        PRIVATE
        Qt6::Widgets
)

qt_finalize_executable(Thales)