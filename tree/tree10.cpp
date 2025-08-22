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

/// Function to insert element in binary tree

void inorder(Node *);
void deletDeepest(Node*, Node*);
Node* deletion(Node*, int);

int main() {
    // Constructing the binary tree
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

    int key = 12;
    root = deletion(root, key);

    inorder(root);
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

/// Function to delete the node with the given key
Node* deletion(Node* root, int key){
    /// If the tree is empty, return null
    if(root == NULL){
        return root;
    }

    /// if only root node is present in our tree
    if(root->right == NULL && root->left == NULL){
        /// If the root node is the key, delete it
        if(root->data == key){
            return NULL; /// tree empty
        }else{
            return root;
        }
    }

    queue<Node*> que;
    que.push(root);

    /// current and key Node
    Node *curr;
    Node *keyNode = NULL;

    /// Level order traversal to find the deepest node and the key node
    while(!que.empty()){
        curr = que.front();
        que.pop();

        /// If current node is the key node
        if(curr->data == key){
            keyNode = curr;
        }

        if(curr->left){
            que.push(curr->left);
        }

        if(curr->right){
            que.push(curr->right);
        }
    }
        /// If key node is found, replace its data with the deepest node
        if(keyNode != NULL){
            int x = curr->data;

            /// Replace key node data with deepest node's data
            keyNode->data = x;

            /// Delete the deepest node
            deletDeepest(root, curr);
        }

        return root;
}

/// Function to delete the deepest node in binary tree
void deletDeepest(Node* root, Node* dNode){
    queue<Node*> que;
    que.push(root);

    Node *curr;
    while(!que.empty()){
        curr = que.front();
        que.pop();

        /// If current node is the deepest node, delete it
        if(curr == dNode){
            curr = NULL;
            delete(dNode);
            return;
        }

        /// Check the right child first
        if(curr->right){
            /// If right child is the deepest node, delete it
            if (curr->right == dNode) {
                curr->right = NULL;
                delete (dNode);
                return;
            }
            que.push(curr->right);
        }

        /// Check the left child
        if(curr->left){
            /// If right child is the deepest node, delete it
            if (curr->left == dNode) {
                curr->left = NULL;
                delete (dNode);
                return;
            }
            que.push(curr->left);
        }
    }
}
