#include<iostream>
#include <vector>
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

void printPostorder(Node* node);

int main() {
	///     Post-order-tree-traversal
	///       1
	///      / \
	///     2   3
	///   /   \   \
	///  4     5   6
	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->right = new Node(6);

    printPostorder(root);

	return 0;
}

void printPostorder(Node *node){
    if(node == NULL){
        return;
    }

    /// First recur on left subtree
    printPostorder(node->left); /// Left


    /// Then recur on right subtree
    printPostorder(node->right); /// Right

    cout<<node->data<<" "; /// Root
}
