/** C++ Program to traverse a binary tree in zigzag manner. */

#include<iostream>
#include<vector>
#include<stack>

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

vector<int> zigzag(Node*);

vector<int> zigzag(Node *root){
    vector<int> res;

    if(root == NULL){
        return res;
    }

    /// Current Level
    stack<Node*> s1;

    /// Next Level
    stack<Node*> s2;

    s1.push(root);

    while(!s1.empty() || ! s2.empty()){
        /** Print nodes of current level from s1 and push nodes of next
        level to s2 */

        while(!s1.empty()){
            Node *curr = s1.top();
            s1.pop();

            res.push_back(curr->data);

            if(curr->left){
                s2.push(curr->left);
            }
            if(curr->right){
                s2.push(curr->right);
            }
        }

        /** Print nodes of current level from s2 and push nodes of
        next level to s1 */

        while(!s2.empty()){
            Node *curr = s2.top();
            s2.pop();

            res.push_back(curr->data);

            if(curr->right){
                s1.push(curr->right);
            }
            if(curr->left){
                s1.push(curr->left);
            }
        }
    }
    return res;
}

int main(){
    /**
        Create a hard coded tree.
             20
           /   \
          8     22
        /  \     \
       4   12    11
          /  \
         10   14
    */

    Node* root = new Node(20);

    root->left = new Node(8);
    root->right = new Node(22);

    root->right->right = new Node(11);
    root->left->left = new Node(4);
    root->left->right = new Node(12);

    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    vector<int> res = zigzag(root);
    cout<<endl<<"Tree in Zigzag : ";
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
