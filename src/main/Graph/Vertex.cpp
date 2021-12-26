#include<Graph/Vertex.hpp>

Vertex::Vertex()
	:weight{ 0 }, index{ "-1" }, colour{ white }, nther{ nullptr }
{}

Vertex::Vertex(std::size_t weight, std::string index)
	: weight{ weight }, index{ index }, colour{ white }, nther{ nullptr }
{}

Vertex::~Vertex()
{
	adjacency.clear();
}