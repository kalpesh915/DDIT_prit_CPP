#include<iostream>
using namespace std;

class Node{
    public:
    int data; /// used to store values
    Node *next; /// used to store address of next node

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
        Node *current = head;
        Node *new_node = new Node(data);

        if(current == NULL){
            head = new_node;
            return;
        }

        while(current->next != NULL){
            current = current->next;
        }

        current->next = new_node;
        return;
    }

    void insertBetween(int data, int key){
        Node *current = head;

        while(current != NULL){
            if(current->data == key){
                break;
            }

            current = current->next;
        }

        if(current == NULL){
            cout<<endl<<"Node not Found";
            return;
        }

        Node *new_node = new Node(data);
        new_node->next = current->next;
        current->next = new_node;
        return;
    }

    void print(){
        Node *temp = head;

        if(temp == NULL){
            cout<<endl<<"List is Empty";
            return;
        }

        /// traversing in Linked List
        cout<<endl<<"Data from linked list : ";
        while(temp != NULL){
            cout<<" "<<temp->data;
            temp = temp->next;
        }
    }

    void search(int data){
        Node *current = head;

        while(current != NULL){
            if(current->data == data){
                break;
            }
            current = current->next;
        }

        if(current == NULL){
            cout<<endl<<data<<" is not found in Linked List";
        }else{
            cout<<endl<<data<<" is found in Linked List";
        }
    }

    void deleteBegining(){
        Node *current = head;

        if(head == NULL){
            cout<<endl<<"Linked list is Empty";
            return;
        }

        head = current->next;
        return;
    }

    void deleteEnd(){
        Node *current = head;

        /// check for list is empty
        if(head == NULL){
            cout<<endl<<"Linked list is Empty";
            return;
        }

        /// check only for single node in list
        if(current->next == NULL){
            head = NULL;
            return;
        }

        while(current->next->next != NULL){
            current = current->next;
        }

        current->next = NULL;
    }

    void deleteBetween(int key){
        Node *current = head;

        if(head == NULL){
            cout<<endl<<"Linked list is Empty";
            return;
        }

        /// code for first element delete
        if(current->data == key){
            head = current->next;
            return;
        }

        Node *prev_node = head;
        while(current != NULL){
            if(current->data == key){
                break;
            }
            prev_node = current;
            current = current->next;
        }

        if(current == NULL){
            cout<<endl<<"Node not Found";
            return;
        }

        prev_node->next = current->next;
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

    list.insertBetween(100, 114);
    list.inserAtEnd(934);
    list.inserAtEnd(914);
    list.inserAtEnd(944);
    list.inserAtEnd(924);

    list.insertAhead(10);

    list.search(115);
    list.search(200);
    list.print();

    list.deleteBegining();
    list.print();

    list.deleteEnd();
    list.deleteEnd();
    list.print();

    list.deleteBetween(116);
    list.print();

    list.deleteBetween(100);
    list.print();
    return 0;
}
