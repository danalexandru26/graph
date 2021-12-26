#include<iostream>
#include<map>
#include<string>
#include<queue>
#include<Graph/Vertex.hpp>

class Graph
{
public:
	Graph() = default;
	~Graph();

	bool add_vertex(std::string index);
	bool add_edge(std::string index_v, std::string index_w);

	void bfs(std::string start);
	void path(std::string v, std::string w);

private:
	std::map<std::string, Vertex*> vertices;
};