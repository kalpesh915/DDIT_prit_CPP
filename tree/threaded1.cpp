#include <vector>
#include <queue>
#include <iostream>

using namespace std;

class Node{
    public:
    Node *left, *right;
    int value;
    bool lthread, rthread;
    
    Node(){
        left = NULL;
        right = NULL;
        lthread = false;
        rthread = false;
    }
    
    Node(int data){
        value = data;
        left = NULL;
        right = NULL;
        lthread = false;
        rthread = false;
    }
};

Node* insert(Node *root, int data){
    Node *ptr = root;
    Node *parent = NULL;
    
    /// code for find where to data insert
    while(ptr != NULL){
        // If key already exists, return
        if(data == (ptr->value)){
            cout<<"Duplicate Key !\n";
            return root;
        }
        
        parent = ptr;
        
        if(data < ptr->value){
            if(ptr->lthread == false){
                ptr = ptr->left;
            }else{
                break;
            }
        }else{
            if(ptr->rthread == false){
                ptr = ptr->right;
            }else{
                break;
            }
        }
    }
    
    // Create new Node
    Node *tmp = new Node(data);
    tmp->lthread = true;
    tmp->rthread = true;
    
    if(parent == NULL){
        root = tmp;
        tmp->left = NULL;
        tmp->right = NULL;
    }else if(data < parent->value){
        tmp->left = parent->left;
        tmp->right = parent;
        parent->lthread = false;
        parent->left = tmp;
    }else{
        tmp->left = parent;
        tmp->right = parent->right;
        parent->rthread = false;
        parent->right = tmp;
    }
    
    return root;
}

Node* inorderSuccessor(Node *ptr){
    // If rthread is set, we can quickly find
    if(ptr->rthread == true){
        return ptr->right;
    }
    
    // Else return leftmost child of right subtree
    ptr = ptr->right;
    while(ptr->lthread == false){
        ptr = ptr->left;
    }
    
    return ptr;
}

void inorder(Node *root){
    if(root == NULL){
        cout<<endl<<"Tree is Empty";
        return;
    }
    
    Node *ptr = root;
    
    while(ptr->lthread == false){
        ptr = ptr->left;
    }
    
    // One by one print successors
    while(ptr != NULL){
        cout<<ptr->value<<" ";
        ptr = inorderSuccessor(ptr);
    }
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 16);
    root = insert(root, 14);
    root = insert(root, 17);
    root = insert(root, 13);
    
    inorder(root);
    return 0;
}