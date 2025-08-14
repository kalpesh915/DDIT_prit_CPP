#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next, *prev;

    Node(){
        next = prev = NULL;
    }

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

class DoublyLinkedList{
    Node *head = NULL;

    public:
    void insertEnd(int value){
        Node *new_node = new Node(value);

        if(head == NULL){
            head = new_node;
            return;
        }

        Node *current = head;
        while(current->next != NULL){
            current = current->next;
        }

        current->next = new_node;
        new_node->prev = current;
    }

    void printLinkedList(){
        Node *current = head;

        cout<<endl<<" Data from Doubly Linked List : ";
        cout<<"NULL ";
        while(current != NULL){
            cout<<" <-"<<current->data<<"->";
            current = current->next;
        }
        cout<<" NULL ";
    }
};

int main(){
    DoublyLinkedList dll;

    /// creating new node
    dll.insertEnd(100);
    dll.insertEnd(101);
    dll.insertEnd(102);
    dll.insertEnd(103);
    dll.insertEnd(104);
    dll.printLinkedList();
    return 0;
}
