
add_library(
	Graph
	Graph.cpp
	Vertex.cpp
)
target_include_directories(Graph PUBLIC "${PROJECT_SOURCE_DIR}/include")