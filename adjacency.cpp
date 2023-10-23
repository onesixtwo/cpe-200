#include <iostream>
#include <vector>

using namespace std;

const int V = 7;

void edge(int adjMatrix[V][V], int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1; 
}

void admatrix(int adjMatrix[V][V]) {
    cout << "adjacency matrix:" << endl;
    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addEdge(vector<int> adjList[], int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void adlist(vector<int> adjList[]) {
    cout << "adjacency list:" << endl;
    for (int i = 1; i <= V; i++) {
        cout << "Vertex " << i << " -> ";
        for (int j : adjList[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int adjMatrix[V][V] = {0};

    edge(adjMatrix, 1, 2);
    edge(adjMatrix, 1, 4);
    edge(adjMatrix, 2, 3);
    edge(adjMatrix, 3, 7);
    edge(adjMatrix, 4, 5);
    edge(adjMatrix, 5, 6);
    edge(adjMatrix, 6, 7);

    admatrix(adjMatrix);

    vector<int> adjList[V + 1];

    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 7);
    addEdge(adjList, 4, 5);
    addEdge(adjList, 5, 6);
    addEdge(adjList, 6, 7);

    adlist(adjList);

    return 0;
}
