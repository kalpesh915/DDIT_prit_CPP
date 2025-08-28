#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj){
    int V = adj.size(); // get size of list
    int s = 0; // source node
    vector<int> res; // create an array to store the traversal
    queue<int> q;  // Create a queue for BFS
    vector<bool> visited(V, false); // Initially mark all the vertices as not visited
    visited[s] = true; //Mark source node as visited and enqueue it

    q.push(s);

    while(!q.empty()){ // Iterate over the queue
        int curr = q.front(); // Dequeue a vertex from queue and store it
        q.pop();
        res.push_back(curr);

        /*  Get all adjacent vertices of the dequeued  vertex curr If an adjacent has not been  visited, mark it visited
        and enqueue it */
        for (int x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }

    return res;
}

int main(){
    vector <vector<int>> adj = {{1, 2}, {0, 2 ,3}, {0, 4}, {1, 4}, {2, 3}};
    vector<int> ans = bfs(adj);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}
