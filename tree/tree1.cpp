#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};


int main(){
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);

    node2->left = node3;
    node2->right = node4;
    node3->left = node5;
    return 0;
}
