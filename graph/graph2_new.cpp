#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int> > &list1, int i, int j){
    list1[i].push_back(j);
    list1[j].push_back(i); /// undrected
}

void displayList(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": "; // Print the vertex
        for (int j : adj[i]) {
            cout << j << " "; // Print its adjacent
        }
        cout << endl;
    }
}

int main()
{
    // Create a graph with 4 vertices and no edges Note that all values are initialized as 0
    int V = 4;
    vector<vector<int>> list1(V);
    // Now add edges one by one
    addEdge(list1, 0, 1);
    addEdge(list1, 0, 2);
    addEdge(list1, 1, 2);
    addEdge(list1, 2, 3);

    cout << "Adjacency List Representation" << endl;
    displayList(list1);

    return 0;
}
