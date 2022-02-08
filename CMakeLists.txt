cmake_minimum_required(VERSION 3.1)

project(hello_world LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(hello_world 
	main.cpp
)

#This line is to copy the resource directory to the target build directory so that the compile gets the file at run time.
message(STATUS "${CMAKE_SOURCE_DIR}")

add_custom_command(
	TARGET hello_world POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
		${CMAKE_SOURCE_DIR}/resources $<TARGET_FILE_DIR:hello_world>/resources
)

