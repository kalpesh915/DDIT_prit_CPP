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

void printPreorder(Node* node);

int main() {
	///     Pre-order-tree-traversal
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

    printPreorder(root);

	return 0;
}

void printPreorder(Node *node){
    if(node == NULL){
        return;
    }

    cout<<node->data<<" "; /// Root

    /// First recur on left subtree
    printPreorder(node->left); /// Left


    /// Then recur on right subtree
    printPreorder(node->right); /// Right
}
