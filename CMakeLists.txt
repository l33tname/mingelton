cmake_minimum_required(VERSION 3.10)

project(MINGELTON
    VERSION 0.0.0
    LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()

add_compile_options(
    -Werror
    -Wall
    -Wextra
    -Wpedantic
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Wcast-align
    -Woverloaded-virtual
    -Wmisleading-indentation
    -Wduplicated-cond
    -Wduplicated-branches
    -Wlogical-op
    -Wuseless-cast
    -Wdouble-promotion
    -Wformat=2)

add_subdirectory(src)
