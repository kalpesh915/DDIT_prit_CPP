#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next, *prev;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

class DoublyCircularLinkedList{
    public:

    Node *head = NULL;
    void insertAtBeginning(int value){
        Node *new_node = new Node(value);

        if(head == NULL){
            new_node->next = new_node->prev = new_node;
            head = new_node;
            return;
        }

        Node *last = head->prev;
        new_node->next = head;
        new_node->prev = last;
        head->prev = new_node;
        last->next = new_node;

        head = new_node;
    }

    void insertAtEnd(int value){
        Node *new_node = new Node(value);

        if(head == NULL){
            new_node->next = new_node->prev = new_node;
            head = new_node;
            return;
        }

        Node *last = head->prev;
        last->next = new_node;
        head->prev = new_node;
        new_node->prev = last;
        new_node->next = head;
    }

    void printList(){
        if(head == NULL){
            cout<<endl<<"Doubly Circular Linked List is Empty";
            return;
        }

        Node *current = head;

        do{
            cout<<" "<<current->data;
            current = current->next;
        }while(current != head);
    }
};

int main(){
    DoublyCircularLinkedList dcll;
    dcll.insertAtBeginning(10);
    dcll.insertAtBeginning(15);
    dcll.insertAtBeginning(20);
    dcll.insertAtBeginning(25);
    dcll.insertAtBeginning(30);
    dcll.insertAtEnd(35);
    dcll.insertAtEnd(40);
    dcll.insertAtEnd(45);
    dcll.insertAtEnd(50);
    dcll.printList();
    return 0;
}
