#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector <vector<int> > &mat, int i, int j){
    mat[i][j] = 1;
    mat[j][i] = 1; ///Since the graph is undirected
}

void displayMatrix(vector<vector<int> > &matrix){
    int v = matrix.size();
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    /**
        Create a graph with 4 vertices and no edges Note that all
        values are initialized as 0
    */
    int v = 4;

    vector<vector<int> > mat(v, vector<int>(v, 0));

    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);
    displayMatrix(mat);

    return 0;
}
