#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  string name;
  Node *left, *right;
  
  Node(string tmp){
      name = tmp;
      left = right = NULL;
  }
};

void preOrder(Node *root){
    if(root == NULL){
        return;
    }
    
    cout<<root->name<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    Node *root = new Node("Shantanu");
    
    root->left = new Node("Bhisma");
    root->right = new Node("Vichitravirsya");
    
    root->right->left = new Node("Dhritrashtra");
    root->right->right = new Node("Pandu");
    
    root->right->right->left = new Node("Yudhishthir");
    root->right->right->right = new Node("Arjun");
    
    preOrder(root);
    return 0;
}
