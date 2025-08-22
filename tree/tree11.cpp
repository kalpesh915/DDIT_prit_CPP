#include<iostream>
#include <queue>
using namespace std;

class Node {
public:
	int data;
	Node *left, *right;

	Node(int value) {
		data = value;
		left = NULL;
		right = NULL;
	}
};

/// print all leaf nodes

void inorder(Node *);
void printLeafNodes(Node*);
int main() {
    /// Constructing the binary tree
  	/**         10
    //        /   \
    //       11    9
    //      / \   / \
    //     7  12 15  8
    */

    Node *root = new Node(10);

    root->left = new Node(11);
    root->right = new Node(9);

    root->left->left = new Node(7);
    root->left->right = new Node(12);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    printLeafNodes(root);
    ///inorder(root);
	return 0;
}

void inorder(Node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<" "<<root->data;
    inorder(root->right);
}

/// function to print leaf nodes from left to right
void printLeafNodes(Node *root){
    if(root == NULL){
        return;
    }

    /// if node is leaf node, print its data
    if(root->left == NULL && root->right == NULL){
        cout<<" "<<root->data;
        return;
    }

    /// if left child exists, check for leaf recursively
    if (root->left){
       printLeafNodes(root->left);
    }

    /// if right child exists, check for leaf recursively
    if (root->right){
       printLeafNodes(root->right);
    }
}
