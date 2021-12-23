#include<iostream>
#include<map>
#include<string>
#include<Graph/Vertex.hpp>

class Graph
{
public:
	Graph();

	bool add_vertex(std::string index);
	bool add_edge(std::string index_v, std::string index_w);

private:
	std::map<std::string, Vertex> vertices;
};