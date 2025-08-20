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

vector <vector<int> > levelOrder(Node*);
void levelOrderRec(Node*, int, vector<vector<int>>&);


int main() {
	///     Level-order-tree-traversal
	///       5
	///      / \
	///     12   13
	///   /   \    \
	///   7     14   2
	/// /  \   /  \  / \
	///17  23 27  3  8  11
	Node *root = new Node(5);
	root->left = new Node(12);
	root->right = new Node(13);

	root->left->left = new Node(7);
	root->left->right = new Node(14);

	root->right->right = new Node(2);

	root->left->left->left = new Node(17);
	root->left->left->right = new Node(23);

	root->left->right->left = new Node(27);
	root->left->right->right = new Node(3);

	root->right->right->left = new Node(8);
	root->right->right->right = new Node(11);

	vector <vector<int> > result = levelOrder(root);

	/// vector printing code
	for(vector <int> level : result) {
		cout<<"[";
		for(int i = 0; i < level.size(); i++) {
			cout<<level[i];
			if (i < level.size() - 1) cout << ", ";
		}
		cout<<"]";
	}

	return 0;
}

vector<vector<int>> levelOrder(Node *root) {
	vector<vector<int>> result;
	levelOrderRec(root, 0, result);
	return result;
}

void levelOrderRec(Node *root, int level, vector<vector<int>> &result) {
	// Base case: If node is null, return
	if (root == NULL) return;


	// Add a new level to the result if needed
	if (result.size() <= level)
		result.push_back({});

	// Add current node's data to its corresponding level
	result[level].push_back(root->data);

	// Recur for left and right children
	levelOrderRec(root->left, level + 1, result);
	levelOrderRec(root->right, level + 1, result);

}
