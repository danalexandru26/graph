#include<Graph/Graph.hpp>

Graph::~Graph()
{
	for (auto vertex : vertices)
	{
		delete vertex.second;
	}

}

bool Graph::add_vertex(std::string index)
{
	if (vertices.find(index) == vertices.end())
	{
		Vertex* a = new Vertex(0, index);
		vertices[index] = a;
		return true;
	}

	return false;
}

bool Graph::add_edge(std::string index_v, std::string index_w)
{
	auto v = vertices.find(index_v)->second;
	auto w = vertices.find(index_w)->second;

	if (v != nullptr && w != nullptr)
	{
		v->adjacency.push_back(w);
		return true;
	}
	return false;
}


void Graph::bfs(std::string start)
{
	std::queue<Vertex*> queue;
	auto vertex = vertices.find(start)->second;

	vertex->colour = "black";
	queue.push(vertex);

	while (!queue.empty())
	{
		auto extract = queue.front();
		std::cout << extract->index << ' ';
		queue.pop();

		for (auto vertex : extract->adjacency)
		{
			if (vertex->colour == "white")
			{
				vertex->colour = "black";
				vertex->nther = extract;
				queue.push(vertex);
			}
		}
	}
}

void Graph::path(std::string v, std::string w)
{
	if (v == w)
	{
		std::cout << v << ' ';
		return;
	}
	else if (vertices[v]->nther == nullptr)
	{
		std::cout << "\nNo path";
		return;
	}
	path(vertices[v]->nther->index, w);
	std::cout << v << ' ';
}