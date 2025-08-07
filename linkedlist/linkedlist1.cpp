/**
    Linked list
*/

#include<iostream>
using namespace std;

struct Node{
    int data; /// Data part of the node
    struct Node *next; /// Pointer to the next node
};

/// create first element with initial value to NULL
struct Node *head = NULL;

void insertBegin();
void insertEnd();
void insertSpecific();
void print();

int main(){
    int opt;

    do{
        cout<<endl<<"Linked List Program";
        cout<<endl<<"Press 1 for Insert at beginning ";
        cout<<endl<<"Press 2 for Insert at End ";
        cout<<endl<<"Press 3 for Insert at Specific Position ";
        cout<<endl<<"Press 4 for Print Values of List";
        cout<<endl<<"Press 0 for Exit \t";
        cin>>opt;

        switch(opt){
            case 1:{
                insertBegin();
                break;
            }

            case 2:{
                insertEnd();
                break;
            }

            case 3:{
                insertSpecific();
                break;
            }

            case 4:{
                print();
                break;
            }

            case 0:{
                cout<<endl<<"Program is Over";
                break;
            }

            default:{
                cout<<endl<<"Invalid Operation Selected";
                break;
            }
        }
    }while(opt != 0);
    return 0;
}


void insertBegin(){
    int value;
    cout<<endl<<"Enter any integer value to insert in Node \t";
    cin>>value;
    struct Node *new_node = new Node(); /// Create a new node
    new_node->data = value; /// Assign data to the node
    new_node->next = head; /// Set the new node's next to current head
    head = new_node; /// Move the head to point to the new node
}

void print(){
    /// printing all the values from linked list till next node have NULL
    struct Node* temp = head;
    cout<<endl<<"Values from Linked List is "<<endl;
    while(temp != NULL){
        cout<<" "<<temp->data;
        temp = temp->next;
    }

    cout<<endl;
}

void insertSpecific(){
    int value, position;

    cout<<endl<<"Enter data to insert in Linked List \t";
    cin>>value;
    cout<<endl<<"Enter Position \t";
    cin>>position;

    struct Node *new_node = new Node();
    struct Node *tmp = head;
    new_node->data = value;
    new_node->next = NULL;

    /// Insert at the beginning if position is 0
    if(position == 0){
        new_node->next = head;
        head = new_node;
        return;
    }

    /// Traverse to the node before the desired position
    for(int i = 0; tmp != NULL && i < position -1; i++){
        tmp = tmp->next;
    }

    /// If position is out of bounds
    if(tmp == NULL){
        cout<<endl<<"Position out of bounds";
        return;
    }

    /// Insert the new node at the given position
    new_node->next = tmp->next;
    tmp->next = new_node;
}

void insertEnd(){
    int value;

    cout<<endl<<"Enter value to insert at end of Linked List \t";
    cin>>value;

    struct Node *new_node = new Node(); /// Create a new node
    struct Node *tmp = head; /// Start from the head

    new_node->data = value; /// Set data for the new node
    new_node->next = NULL; /// Set next to NULL (end of list)

    /// If the list is empty, make the new node the head
    if(head == NULL){
        head = new_node;
        return;
    }

    /// Traverse to the last node
    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    /// Insert the new node at the end
    tmp->next = new_node;
}
