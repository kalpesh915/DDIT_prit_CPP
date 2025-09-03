#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V; // number of vertices
    vector<vector<int>> adj; // adjacency list

    public: 
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    // Add edge (undirected graph)
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // DFS traversal for a component
    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        cout << v << " ";

        for (int u : adj[v]) {
            if (!visited[u]) {
                DFSUtil(u, visited);
            }
        }
    }

    // Find all connected components
    void connectedComponents() {
        vector<bool> visited(V, false);

        for (int v = 0; v < V; v++) {
            if (!visited[v]) {
                cout << "Connected Component: ";
                DFSUtil(v, visited);
                cout << endl;
            }
        }
    }
};

int main() {
    Graph g(11);

    // First group
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);

    // Second group
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    // Third group
    g.addEdge(7, 8);
    g.addEdge(7, 9);
    g.addEdge(7, 10);
    g.addEdge(8, 9);
    g.addEdge(9, 10);

    cout << "Connected Components in the Graph:\n";
    g.connectedComponents();

    return 0;
}
