#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

class BinaryTree{
    public:
    Node *root;

    BinaryTree(){
        root = NULL;
    }

    // Insert manually
    Node *insert()
    {
        int val;
        cout << "Enter value (-1 for no node): ";
        cin >> val;

        if (val == -1)
            return NULL;

        Node *newnode = new Node(val);

        cout << "Enter left child of " << val << ":\n";
        newnode->left = insert();

        cout << "Enter right child of " << val << ":\n";
        newnode->right = insert();

        return newnode;
    }

    /// Check if leaf
    bool isLeaf(Node *n){
        return (n->left == NULL && n->right == NULL);
    }

    /// Add left boundary (excluding leaves)
    void addLeftBoundry(Node *n, vector<int> &res){
        Node *curr = n->left;
        while(curr){
            if(!isLeaf(curr)){
                res.push_back(curr->data);
            }
            if(curr->left){
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
    }

    /// Add leaf nodes
    void addLeaves(Node *n, vector<int> &res){
        if(n == NULL){
            return;
        }

        if(isLeaf(n)){
            res.push_back(n->data);
            return;
        }
        addLeaves(n->left, res);
        addLeaves(n->right, res);
    }

    // Add right boundary in reverse (excluding leaves)
    void addRightBoundry(Node *n, vector<int> &res)
    {
        vector<int> temp;
        Node *curr = n->right;
        while (curr)
        {
            if (!isLeaf(curr))
                temp.push_back(curr->data);
            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }
        /// Add in reverse order
        for (int i = temp.size() - 1; i >= 0; i--)
        {
            res.push_back(temp[i]);
        }
    }

    vector<int> boundaryTraversal(Node *n){
        vector<int> res;
        if(n == NULL){
            return res;
        }

        if(!isLeaf(n)){
            res.push_back(n->data);
        }

        addLeftBoundry(n, res);
        addLeaves(n, res);
        addRightBoundry(n, res);
    }
};


int main(){
    BinaryTree tree;

    cout << "Build your binary tree:\n";
    tree.root = tree.insert();

    vector<int> ans = tree.boundaryTraversal(tree.root);

    cout << "\nBoundary Traversal: ";
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
