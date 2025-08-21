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

int findLevel(Node* node, int key, int level);

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

	int key = 2;
	int level = 1;
    int ans = findLevel(root, key, level);

    cout<<endl<<" Level of Key "<<key<<" is : "<<ans;
	return 0;
}

int findLevel(Node* node, int key, int level){
    if(node == NULL){
        return -1;
    }

    /**
        if the target key matches the current node's data, return the level
    */

    if(node->data == key){
        return level;
    }

    /**
        Recursively call for left and right subtrees
    */
    int leftLevel = findLevel(node->left, key, level+1);
    if(leftLevel != -1){
        return leftLevel;
    }

    return findLevel(node->right, key, level+1);
}
