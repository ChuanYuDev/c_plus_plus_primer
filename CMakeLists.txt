cmake_minimum_required(VERSION 3.15)
project(cppp)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# set(CPPP_PUBLIC_HEADER ${CMAKE_SOURCE_DIR}/include)
# set(CPPP csapp_lib)

add_subdirectory(exercises)