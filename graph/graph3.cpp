#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector <vector <int> > &adj){
    int v = adj.size();

    int s = 0; /// source node

    /// create an array to store the traversal
    vector<int> res;

    /// Create a queue for BFS
    queue<int> q;

    /// Initially mark all the vertices as not visited
    vector<bool> visited(v, false);

    /// Mark source node as visited and enqueue it
    visited[s] = true;
    q.push(s);

    /// Iterate over the queue
    while(!q.empty()){
        /// Dequeue a vertex from queue and store it
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        /** Get all adjacent vertices of the dequeued
         vertex curr If an adjacent has not been
         visited, mark it visited and enqueue it */

         for(int x = 0; x < adj[curr].size(); x++){
            int tmp = adj[curr][x];
            if(!visited[tmp]){
                visited[tmp] = true;  // ✅ fix here
                q.push(tmp);          // ✅ fix here
            }
         }
    }

    return res;
}

int main(){
    vector<vector<int> > adj = {{1,2}, {0,2,3}, {0,4}, {1,4}, {2,3}};
    vector<int> ans = bfs(adj);
    for(int i = 0; i < ans.size(); i++){
        cout<<" "<<ans[i];
    }
    return 0;
}
