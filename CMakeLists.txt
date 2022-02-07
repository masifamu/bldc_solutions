cmake_minimum_required(VERSION 3.1)

project(hello_world LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(hello_world 
	main.cpp
)

