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
        ///cout<<value;
        data = value;
        next = prev = NULL;
    }
};

class DoublyLinkedList{
    Node *head = NULL;

    public:
    /// Function to insert a new node at the front of doubly linked list
    void insertAtFront(int value){
        Node *new_node = new Node(value);

        /// check if list is empty then set new node to head
        if(head == NULL){
            ///cout<<"Head is NULL"<<endl;
            head = new_node;
            ///cout<<head->data;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
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
    dll.insertAtFront(100);
    dll.insertAtFront(101);
    dll.insertAtFront(102);
    dll.insertAtFront(103);
    dll.insertAtFront(104);

    dll.printLinkedList();
    return 0;
}
