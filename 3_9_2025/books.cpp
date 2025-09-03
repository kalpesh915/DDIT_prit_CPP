#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BST {
    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr) return new Node(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);
        return node;
    }

    Node* findMin(Node* node) {
        while (node && node->left) node = node->left;
        return node;
    }

    Node* remove(Node* node, int value) {
        if (node == nullptr) return node;

        if (value < node->data)
            node->left = remove(node->left, value);
        else if (value > node->data)
            node->right = remove(node->right, value);
        else {
            // Node with one child or no child
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            // Node with two children: inorder successor
            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = remove(node->right, temp->data);
        }
        return node;
    }

    void inorder(Node* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BST() { root = nullptr; }

    void insert(int value) { root = insert(root, value); }

    void remove(int value) { root = remove(root, value); }

    void display() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    BST tree;

    // Initial insertions
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) tree.insert(v);

    cout << "Initial Tree:\n";
    tree.display();

    // 1. Remove 20
    tree.remove(20);
    cout << "After removing 20:\n";
    tree.display();

    // 2. Insert 65
    tree.insert(65);
    cout << "After inserting 65:\n";
    tree.display();

    // 3. Remove 30
    tree.remove(30);
    cout << "After removing 30:\n";
    tree.display();

    // 4. Remove 70
    tree.remove(70);
    cout << "After removing 70:\n";
    tree.display();

    return 0;
}
