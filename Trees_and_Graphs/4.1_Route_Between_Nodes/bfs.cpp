#include <iostream>
#include <vector>
#include <queue>

bool bfs(std::vector<std::vector<int>>& g, int i, int j) {
	std::queue<int> queue;
	queue.push(i);

	bool visited[g.size()] = { false };
	while (!queue.empty()) {
		int vertex = queue.front();
		queue.pop();
		visited[vertex] = true;

		if (vertex == j) return true;

		for (auto v : g[vertex]) {
			if (!visited[v]) {
				visited[v] = true;
				queue.push(v);
			}
		}
	}

	return false;
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
	std::cout << (bfs(graph, i, j) ? "\nPath exists\n" : "\nPath doesn't exist\n");

	return 0;
}


