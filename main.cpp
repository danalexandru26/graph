#include<Graph/Graph.hpp>

int main()
{
	Graph x;

	x.add_vertex("0");
	x.add_vertex("1");
	x.add_vertex("2");

	x.add_edge("0", "1");
	x.add_edge("1", "2");
	x.add_edge("0", "2");

	x.bfs("0");

	return 0;
}