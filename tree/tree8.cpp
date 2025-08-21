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

bool nodeExists(Node* node, int key);

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

    int key = 50;
    bool ans = nodeExists(root, key);
    cout<<endl<<" Key is in Tree "<<key<<" is : "<<ans;
	return 0;
}

bool nodeExists(Node* node, int key){
    if(node == NULL){
        return false;
    }

    if(node->data == key){
        return true;
    }

    /// then recur on left subtree
    bool res1 = nodeExists(node->left, key);

    /// node found, no need to look further
    if (res1) return true;

    /// node is not found in left, so recur on right subtree
    bool res2 = nodeExists(node->right, key);
}
