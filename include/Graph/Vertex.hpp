#include<iostream>
#include<memory>
#include<string>
#include<vector>

#define black std::string("black")
#define white std::string("white")

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