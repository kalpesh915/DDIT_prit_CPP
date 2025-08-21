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

void printInorder(Node* node);

int main() {
	///     In-order-tree-traversal
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

    printInorder(root);

	return 0;
}

void printInorder(Node *node){
    if(node == NULL){
        return;
    }

    /// First recur on left subtree
    printInorder(node->left);

    cout<<node->data<<" ";

    /// Then recur on right subtree
    printInorder(node->right);
}
