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
Node* insertNode(Node*, int);
int main() {
    // Constructing the binary tree
  	/**         10
    //        /    \
    //       11     9
    //      /      / \
    //     7      15  8
    */

    Node *root = new Node(10);

    root->left = new Node(11);
    root->right = new Node(9);

    root->left->left = new Node(7);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    int key = 12;
    root = insertNode(root, key);

    /// After insertion 12 in binary tree
  	/**         10
    //        /    \
    //       11     9
    //      /  \   / \
    //     7   12 15  8
    */

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

Node* insertNode(Node *root, int key){
     /// If the tree is empty, assign new node address to root
     if(root == NULL){
        root = new Node(key);
        return root;
     }

     /**
        Else, do level order traversal until we find an empty
        place, i.e. either left child or right child of some
        node is pointing to NULL.
     */

     queue<Node *> que;
     que.push(root);

     while(!que.empty()){
        /// Fron a front element in queue
        Node *curr = que.front();
        que.pop();

        /** First check left if left is null insert node in left
        otherwise chaeck for right */
        if(curr->left != NULL){
            que.push(curr->left);
        }else{
            curr->left = new Node(key);
            return root;
        }

        if(curr->right != NULL){
            que.push(curr->right);
        }else{
            curr->right = new Node(key);
            return root;
        }
     }
}
