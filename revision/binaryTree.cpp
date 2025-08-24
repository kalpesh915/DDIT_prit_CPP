#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

class BinaryTree{
    public:
    Node *root;

    BinaryTree(){
        root = NULL;
    }

    Node* insert(){
        int value;
        cout<<endl<<"Enter value (-1 for no node): ";
        cin>>value;

        if(value == -1){
            return NULL;
        }

        Node *new_node = new Node(value);
        cout<<endl<<"Enter left Child of "<<value;
        new_node->left = insert();
        cout<<endl<<"Enter Right Child of "<<value;
        new_node->right = insert();

        return new_node;
    }

    /// Inorder Traversal: Left, Root, Right (LNR)
    void inOrder(Node *node){
        if(node == NULL){
            return;
        }
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }

    /// Preorder Traversal: Root, Left, Right (NLR)
    void preOrder(Node *node){
        if(node == NULL){
            return;
        }
        cout<<node->data<<" ";
        inOrder(node->left);
        inOrder(node->right);
    }

    /// Postorder Traversal: Left, Right, Root (LRN)
    void postOrder(Node *node){
        if(node == NULL){
            return;
        }

        inOrder(node->left);
        inOrder(node->right);
        cout<<node->data<<" ";
    }
};

int main(){
    BinaryTree bt;
    cout << "Build your binary tree:\n";
    bt.root = bt.insert();
    cout << "\n Inorder Traversal: (LNR) : ";
    bt.inOrder(bt.root);
    cout << "\n Preorder Traversal: (NLR) : ";
    bt.preOrder(bt.root);
    cout << "\n Postorder Traversal: (LRN) : ";
    bt.postOrder(bt.root);
    return 0;
}
