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

int findHeight(Node* node);

int main() {
	///     Maximum Height
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

    int ans = findHeight(root);

    cout<<endl<<" Height of Tree is "<<ans;
	return 0;
}

int findHeight(Node *node){
    if(node == NULL){
        return -1;
    }

    int lHeight = findHeight(node->left);
    int rHeight = findHeight(node->right);

    return max(lHeight, rHeight) + 1;
}
