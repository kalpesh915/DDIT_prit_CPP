#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Recursive function for DFS traversal
void dfsrec(vector<vector<int>> &adj, vector<bool> &visited, int s, vector<int> &res){
    visited[s] = true;
    res.push_back(s);
    // Recursively visit all adjacent vertices that are not visited yet
    for(int i : adj[s]){
        if(visited[i] == false) {
            dfsrec(adj, visited, i, res);
        }
    }
}

// Main DFS function that initializes the visited array and call DFSRec
vector<int> dfs(vector<vector<int>> &adj){
    vector<bool> visited(adj.size(), false);
    vector<int> res;
    dfsrec(adj, visited, 1, res);
    return res;
}

void addEdge(vector<vector<int>> &adj, int s, int t){
    adj[s].push_back(t);
    adj[t].push_back(s);
}

int main(){
    int v = 5;
    vector<vector<int>> adj(v);
    // Add edges
    vector<vector<int>> edges = {{1, 2}, {1, 0}, {2, 0}, {2, 3}, {2, 4}};
    for (auto &e : edges){
        addEdge(adj, e[0], e[1]);
    }
    // Starting vertex for DFS
    vector<int> res = dfs(adj);

    for (int i = 0; i < v; i++){
        cout << res[i] << " ";
    }
    return 0;
}
