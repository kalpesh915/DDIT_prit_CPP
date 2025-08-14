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

    void insertAtPosition(int position, int value){
        Node *new_node = new Node(value);
        Node *current = head;

        /// check if list is empty set new node as head
        if(head == NULL){
            head = new_node;
            return;
        }

        while(current->next != NULL){
            if(current->data == position){
                break;
            }
            current = current->next;
        }

        if(current == NULL){
            cout<<endl<<"Element not Found in Linked List";
            return;
        }

        /// link update
        current->next->prev = new_node;
        new_node->next = current->next;
        current->next = new_node;
        new_node->prev = current;
    }

    void findLength(){
        Node *current = head;
        int count = 0;

        while(current != NULL){
            count++;
            current = current->next;
        }

        cout<<endl<<"Total Elements is Linkedlist is "<<count;
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

    dll.insertAtPosition(102, 111);
    dll.printLinkedList();
    dll.findLength();
    return 0;
}
