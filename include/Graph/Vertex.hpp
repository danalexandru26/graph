#include<iostream>
#include<memory>
#include<string>
#include<vector>

struct Vertex
{
	std::size_t weight;
	std::string index;
	std::string colour;
	Vertex* nther;

	std::vector<Vertex*> adjacency;

	Vertex();
	Vertex(std::size_t weight, std::string index);
	~Vertex();
};