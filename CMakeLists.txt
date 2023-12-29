cmake_minimum_required(VERSION 3.16)

project(exchange_core VERSION 0.0.1 LANGUAGES C CXX)

set(TARGET exchange_core)
add_executable(${TARGET})

target_sources(${TARGET} PRIVATE 
    src/main.cpp 
    src/core/instrument.cpp
    src/core/order.cpp
)

target_include_directories(${TARGET} PRIVATE include/)