#include <iostream>
#include <vector>

bool dfs(std::vector<std::vector<int>>& g, std::vector<bool>& visited, int i, int j) {
	visited[i] = true;
	for (auto v : g[i]) if (!visited[v]) dfs(g, visited, v, j);
	return visited[j];
}

int main() {
	int E, V;
	std::cin >> V >> E;

	std::vector<std::vector<int>> graph(V);
	int i, j;
	while (E--) {
		std::cin >> i >> j;
		graph[i].push_back(j);
	}

	std::cout << "Path to check? ";
	std::cin >> i >> j;

	std::vector<bool> visited(V, false);
	std::cout << (dfs(graph, visited, i, j) ? "\nPath exists\n" : "\nPath doesn't exist\n");

	return 0;
}


