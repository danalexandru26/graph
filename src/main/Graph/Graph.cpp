#include<Graph/Graph.hpp>

bool Graph::add_vertex(std::string index)
{
	if (vertices.find(index) == vertices.end())
	{
		Vertex a(0, index);
		vertices[index] = a;
		return true;
	}

	return false;
}

bool Graph::add_edge(std::string index_v, std::string index_w)
{
	return false;
}