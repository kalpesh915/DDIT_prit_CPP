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
            cout<<endl<<"List is Not Empty";
            return;
        }

        Node *new_node = new Node(value);
        new_node->next = new_node;
        last = new_node;
    }

    void insertAtBegining(int value){
        Node *new_node = new Node(value);
        if(last == NULL){
            insertInEmptyList(value);
            return;
        }else{
            new_node->next = last->next;
            last->next = new_node;
        }
    }

    void insertLast(int value){
        Node *new_node = new Node(value);
        if(last == NULL){
            insertInEmptyList(value);
            return;
        }else{
            new_node->next = last->next;
            last->next = new_node;
            last = new_node;
        }
    }

    void findNode(int value){
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
            cout<<endl<<value<<" is found in linked list";
        }else{
            cout<<endl<<value<<" is not found in linked list";
        }
    }

    void printCircularLinkedList(){
        if(last == NULL){
            cout<<endl<<"Circular Linked List Empty";
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
    cll.insertInEmptyList(10);
    ///cll.insertInEmptyList(20);
    cll.insertAtBegining(20);
    cll.insertAtBegining(30);
    cll.insertAtBegining(40);
    cll.insertAtBegining(50);
    cll.insertLast(60);
    cll.insertLast(70);
    cll.insertLast(80);
    cll.insertLast(90);
    cll.insertLast(100);
    cll.findNode(10);
    cll.findNode(15);
    cll.printCircularLinkedList();
    return 0;
}
