#include<iostream>
using namespace std;

class Node {
    public:
    int value;
    Node *left, *right;

    Node(int data){
        this->value = data;
        this->left = NULL;
        this->right = NULL;
    }
};

/**
    function for insert a new node with given key value
*/

Node* insertNode(Node *root, int key){
    /// If the tree is empty, return a new node
    if(root == NULL){
        return new Node(key);
    }

    /// If the key is already present in the tree,
    if(root->value == key){
        return root;
    }

    /**
        Otherwise, recur down the tree If the key to be inserted
        is greater than the node's key, insert it in the right subtree
    */
    if(root->value < key){
        root->right = insertNode(root->right, key);
    }else{
        root->left = insertNode(root->left, key);
    }

    return root;
}

/// A utility function to do inorder tree traversal
void inOrder(Node *root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->value<<" ";
    inOrder(root->right);
}

int main() {
    /**
        Creating the following BST
           50
         /   \
        30   70
       / \   / \
      20 40 60 80
    */

    Node *root = new Node(50);

    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
    root = insertNode(root, 100);
    root = insertNode(root, 50);

    inOrder(root);
	return 0;
}
