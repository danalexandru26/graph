#include<iostream>
#include<map>
#include<string>
#include<queue>
#include<Graph/Vertex.hpp>

class Graph
{
public:
	Graph() = default;

	bool add_vertex(std::string index);
	bool add_edge(std::string index_v, std::string index_w);

	void bfs(std::string start);

private:
	std::map<std::string, Vertex*> vertices;
};