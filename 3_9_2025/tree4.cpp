// C++ program to insert element (in level order)

#include <iostream>
#include <queue>
using namespace std;

class Node {
public: 
  	int data;
    Node* left;
    Node* right;
	Node(int x) {
    	data = x;
      	left = right = nullptr;
    }
};

// Inorder traversal of a binary tree  L->N->R
void inorder(Node* curr) {
    if (curr == nullptr)
        return;
    inorder(curr->left);
    cout << curr->data << ' ';
    inorder(curr->right);
}

// Preorder R-> L -> R
void preorder(Node* root){
    if(root == nullptr){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
  
  	// Constructing the binary tree
  	//          10
    //        /    \ 
    //       11     9
    //      /      / \
    //     7      15   8
  
    Node* root = new Node(10);
    root->left = new Node(11);
  	root->right = new Node(9);
    root->left->left = new Node(7);
    root->right->left = new Node(15);
    root->right->right = new Node(8);
  
    //preorder(root);
    //postorder(root);
    inorder(root);

    return 0;
}