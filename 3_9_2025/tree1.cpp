#include <stdio.h>

class Node{
    public:
    Node *left, *right;
    int info;
    
    Node(int value){
        info = value;
        left = right = NULL;
    }
};

/*
        12
       /  \
      14  20
     /
    17
*/

int main(){
    Node *root = NULL;  
    root = new Node(12);
    
    root->left = new Node(14);
    root->right = new Node(20);
    
    root->left->left = new Node(17);
    
    return 0;
}