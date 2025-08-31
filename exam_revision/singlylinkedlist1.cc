#include <iostream>
using namespace std;

class Node{
    public:
    
    Node *next, *prev;
    int info;
    
    Node(){
        info = 0;
        next = NULL;
        prev = NULL;
    }
    
    Node(int value){
        info = value;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList{
    public:
    Node *head = NULL;
    
    void insertBegin(int value){
        Node *new_node = new Node(value);
        
        /// check linked list is empty or not
        if(head == NULL){
            head = new_node;
            return;
        }
        
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
    
    void insertEnd(int value){
        Node *new_node = new Node(value);
        if(head == NULL){
            head = new_node;
            return;
        }
        
        Node *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        
        curr->next = new_node;
        new_node->prev = curr;
    }
    
    void insertAtPosition(int value, int position){
        if(head == NULL){
            cout<<endl<<"Linked List is Empty";
            return;       
        }
        
        if(position < 0){
            return;
        }
        
        if(position == 1){
            insertBegin(value);
            return;
        }
        
        
        Node *curr = head;
        for(int count = 1; count < position - 1 && curr != NULL; count++){
            curr = curr->next;
        }
        //cout<<" Current Value "<<curr->info;
        
        if(curr == NULL){
            cout<<endl<<"Index is Out of Range";
            return;
        }
        
        Node *new_node = new Node(value);
        new_node->next = curr->next;
        curr->next = new_node;
        return;
    }
    
    void traversList(){
        if(head == NULL){
            cout<<endl<<"Linked List is Empty";
            return;
        }
            
        Node *curr = head;
        cout<<endl<<"Values From Linked List : ";
        while(curr != NULL){
            cout<<curr->info<<" ";
            curr = curr->next;
        }
    }
    
    void removeFirst(){
        if(head == NULL){
            cout<<endl<<"Linked List is Empty";
            return;
        }
        
        head = head->next;
        return;
    }
    
    void removeByPosition(int position){
        if(head == NULL){
            cout<<endl<<"Linked List is Empty";
            return;
        }
        if(position < 0){
            return;
        }
        if(position == 1){
            removeFirst();
            return;
        }
        
        Node *curr = head;
        for(int count = 1; count < position-1 && curr != NULL; count++){
            curr = curr->next;
        }
        
        if(curr == NULL){
            cout<<endl<<"Index is Out of Range";
            return;
        }
        
        curr->prev->next = curr->next;
    }
    
    void search(int value){
        if(head == NULL){
            cout<<endl<<"Linked List is Empty";
            return;
        }
        
        bool flag = false;
        Node *curr = head;
        
        while(curr != NULL){
            if(curr->info == value){
                flag = true;
                break;
            }
            curr = curr->next;
        }
        
        if(flag == true){
            cout<<endl<<value<<" is Exist in Linked List";
        }else{
            cout<<endl<<value<<" is Not Exist in Linked List";   
        }
    }
    
    void removeLast(){
        if(head == NULL){
            cout<<endl<<"Linked List is Empty";
            return;
        }
        
        Node *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        
        curr->prev->next = NULL;
    }
};

int main(){
    LinkedList list1;
    list1.insertBegin(5);
    list1.insertBegin(10);
    list1.insertBegin(15);
    list1.insertBegin(20);
    list1.insertBegin(25);
    list1.insertBegin(30);
    list1.insertBegin(35);
    list1.insertBegin(40);
    list1.insertBegin(45);
    list1.insertBegin(50);
    list1.insertEnd(11);
    list1.insertEnd(21);
    list1.insertEnd(31);
    list1.insertEnd(41);
    list1.insertEnd(51);
    list1.insertAtPosition(100, 1);
    list1.traversList();
    list1.insertAtPosition(110, 2);
    list1.traversList();
    list1.insertAtPosition(112, 12);
    list1.traversList();
    list1.removeFirst();
    list1.traversList();
    list1.removeLast();
    list1.removeLast();
    list1.removeLast();
    list1.traversList();
    list1.removeByPosition(10);
    list1.traversList();
    list1.search(50);
    list1.search(500);
    return 0;
}