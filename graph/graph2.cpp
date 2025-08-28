#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector< vector <int> > &adj, int i, int j){
    adj[i].push_back(j);
    adj[j].push_back(i);
}

void displayList(const vector<vector<int> >& adj){
    for(int i = 0; i < adj.size(); i++){
        cout<<i<<" : ";
        for(int j = 0; j < adj[i].size(); j++){
            cout<<" "<<adj[i][j];
        }

        cout<<endl;
    }
}

int main(){
    int v = 4;
    vector < vector <int> > adj(v);
    /// Now add edges one by one
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    cout << "Adjacency List Representation:" << endl;
    displayList(adj);
    return 0;
}
