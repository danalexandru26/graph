cmake_minimum_required(VERSION 3.8)

project(myGraph VERSION 1.0)

add_executable(
	myGraph
	main.cpp
)
target_link_libraries(myGraph PRIVATE Graph)
target_include_directories(myGraph PUBLIC "${PROJECT_SOURCE_DIR}/include")

add_subdirectory(src/main/Graph)