#include <iostream>
#include <vector>
#include <set>

class Graph {
public:
    Graph(int V) : vertices(V), adjList(V) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For an undirected graph
    }

    void DFSUtil(int v, std::vector<bool>& visited) {
        visited[v] = true;
        std::cout << v << " ";

        for (int i : adjList[v]) {
            if (!visited[i]) {
                DFSUtil(i, visited);
            }
        }
    }

    void DFS(int v) {
        std::vector<bool> visited(vertices, false);
        DFSUtil(v, visited);
    }

private:
    int vertices;
    std::vector<std::vector<int>> adjList;
};

int main() {
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    std::cout << "DFS traversal starting from vertex 0: ";
    g.DFS(0);

    return 0;
}
