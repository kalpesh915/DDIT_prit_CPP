#include<iostream>
#include<queue>
#include<vector>

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
        int val;
        cout << "Enter value (-1 for no node): ";
        cin >> val;

        if (val == -1)
            return NULL;

        Node *newNode = new Node(val);
        cout << "Enter left child of " << val << endl;
        newNode->left = insert();
        cout << "Enter right child of " << val << endl;
        newNode->right = insert();

        return newNode;
    }

    int findPosition(int ip[], int element, int n){
        for(int i = 0; i < n; i++){
            if(ip[i] == element){
                return i;
            }
        }
        return -1;
    }

    Node* solve(int in[], int post[], int &postOrderIndex, int inSt, int inEnd, int n){
        if(inSt > inEnd || postOrderIndex < 0){
            return NULL;
        }

        int element = post[postOrderIndex--];
        Node *temp = new Node(element);
        int position = findPosition(in, element, n);

        /// Important: build right subtree first, then left (because postorder is L R Root)
        temp->right = solve(in, post, postOrderIndex, position + 1, inEnd, n);
        temp->left = solve(in, post, postOrderIndex, inSt, position -1, n);

        return temp;

    }

    Node* buildTree(int in[], int post[], int n){
        int postOrderIndex = n - 1;
        Node *ans = solve(in, post, postOrderIndex, 0, n-1, n);
        return ans;
    }

    void LevelOrder(Node *node){
        if(node == NULL){
            return;
        }

        queue<Node*> q1;
        q1.push(node);

        while(!q1.empty()){
            Node *front = q1.front();
            q1.pop();

            if(front){
                cout << front->data << " ";
                q1.push(front->left);
                q1.push(front->right);
            }
        }
    }
};

int main(){
    int inorder[] = {4, 8, 2, 5, 1, 6, 3, 7};
    int postorder[] = {8, 4, 5, 2, 6, 7, 3, 1};
    int n = 8;

    BinaryTree tree;
    Node *ans = tree.buildTree(inorder, postorder, n);

    cout << "Level Order Traversal: ";
    tree.LevelOrder(ans);
    return 0;
}
