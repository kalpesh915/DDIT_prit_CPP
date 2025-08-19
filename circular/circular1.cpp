#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class CircularLinkedList{
    public:
    Node *last = NULL;

    void insertInEmptyList(int value){
        if(last != NULL){
            cout<<endl<<"Circular Linked List is not Empty";
            return;
        }

        Node *new_node = new Node(value);
        new_node->next = new_node;
        last = new_node;
    }

    void insertBeginning(int value){
        Node *new_node = new Node(value);

        if(last == NULL){
            last = new_node;
            new_node->next = new_node;
            return;
        }

        new_node->next = last->next;
        last->next = new_node;
    }

    void insertLast(int value){
        Node *new_node = new Node(value);
        if(last == NULL){
            last = new_node;
            new_node->next = new_node;
            return;
        }

        new_node->next = last->next;
        last->next = new_node;
        last = new_node;
    }

    void find(int value){
        if(last == NULL){
            cout<<endl<<"Circular Linked List is Empty";
            return;
        }

        Node *head = last->next;
        int flag = 0;

        while(true){
            if(head->data == value){
                flag = 1;
                break;
            }

            head = head->next;

            if(head == last->next){
                break;
            }
        }

        if(flag == 1){
            cout<<endl<<value<<" is Found in Circular Linked List";
        }else{
            cout<<endl<<value<<" is Not Found in Circular Linked List";
        }
    }

    void printList(){
        if(last == NULL){
            cout<<endl<<"Circular Linked List is Empty";
            return;
        }

        Node *head = last->next;
        cout<<endl<<"Values From Linked List : ";
        while(true){
            cout<<head->data<<" ";
            head = head->next;
            if(head == last->next){
                break;
            }
        }
    }
};


int main(){
    CircularLinkedList cll;
    cll.insertInEmptyList(5);
    ///cll.insertInEmptyList(15);
    cll.insertBeginning(10);
    cll.insertBeginning(15);
    cll.insertBeginning(20);
    cll.insertBeginning(25);
    cll.insertLast(30);
    cll.insertLast(35);
    cll.insertLast(40);
    cll.insertLast(45);
    cll.insertLast(50);
    cll.printList();
    cll.find(100);
    cll.find(5);
    return 0;
}
