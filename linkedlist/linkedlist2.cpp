#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    /// constructor for default value
    Node(){
        data = 0;
        next = NULL;
    }

    /// parmeterized constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

/// Linked list class to implement a singly linked list
class LinkedList{
    Node *head;
    public:
    LinkedList(){
        head = NULL;
    }

    ///Function to insert a node at the start of the linked list
    void insertAhead(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            /// linked list is empty
            head = newNode;
            return;
        }

        /// Insert the newly created linked list at the head
        newNode->next = head;
        head = newNode;
    }

    void inserAtEnd(int data){

    }

    void insertBetween(int data, int pos){

    }

    void print(){
        Node *temp = head;

        if(temp == NULL){
            cout<<endl<<"List is Empty";
            return;
        }

        /// traversing in Linked List
        while(temp != NULL){
            cout<<" "<<temp->data;
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList list;
    list.insertAhead(111);
    list.insertAhead(112);
    list.insertAhead(113);
    list.insertAhead(114);
    list.insertAhead(115);
    list.insertAhead(116);
    list.print();
    return 0;
}
