#include<iostream>
using namespace std;

class Node {
    public:
    char value;
    Node *left, *right;
    Node *next = NULL;

    Node(char c){
        this->value = c;
        this->left = NULL;
        this->right = NULL;
    }

    Node(){
        left = right = NULL;
    }

    friend class Stack;
    friend class expression_tree;
};

class Stack{
    Node *head = NULL;

    public:
    void push(Node*);
    Node* pop();

    friend class expression_tree;
};

class expression_tree{
    public:
    void inOrder(Node *root){
        if(root == NULL){
            return;
        }

        inOrder(root->left);
        cout<<root->value<<" ";
        inOrder(root->right);
    }
};

void Stack::push(Node *x){
    if(head == NULL){
        head = x;
    }else{
        /**
            We are inserting here nodes at the top of the stack
            [following LIFO principle]
        */

        x->next = head;
        head = x;
    }
}

Node* Stack::pop(){
    Node *p = head;
    head = head->next;
    return p;
}

int main() {

    string expression = "ABC*+D/";
    /// If you  wish take input from user:
    /// cout << "Insert Postorder Expression: " << endl;
    /// cin >> expression;

    Stack s;
    expression_tree et;
    Node *x, *y, *z;

    int length = expression.length();

    for(int i=0; i<length; i++){
        /**
            if read character is operator then popping two other
            elements from stack and making a binary tree
        */

        if(expression[i] == '+' || expression[i] == '-' ||
           expression[i] == '*' || expression[i] == '/' ||
           expression[i] == '^'){
               /// create new node of operator
                z = new Node(expression[i]);
                /// get last two operands
                x = s.pop();
                y = s.pop();

                z->left = y;
                z->right = x;

                s.push(z);

           }else{
                z = new Node(expression[i]);
                s.push(z);
           }
    }
    cout<<endl<<" The Inorder Traversal of Expression Tree: ";
    et.inOrder(z);
	return 0;
}
