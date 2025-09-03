/// C++ program to implement the circular queue using array

#include<iostream>
#define size 5
using namespace std;

class Queue{
    public:
    int front, rear, data[size];

    Queue(){
        front = rear = -1;
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }

    bool isFull(){
        if((rear + 1) % size == front){
            return true;
        }
        return false;
    }

    void enqueue(int value){
        if(this->isFull()){
            cout<<endl<<"Queue is Overflow";
            return;
        }

        rear = (rear + 1) % size;
        data[rear] = value;
        ///cout<<endl<<"Front "<<front<<" Rear "<<rear;
    }

    void dequeue(){
        if(this->isEmpty()){
            cout<<endl<<"Queue is Underflow";
            return;
        }
        front = (front + 1) % size;
    }

    int peek(){
        if(this->isEmpty()){
            cout<<endl<<"Queue is Empty";
            return -1;
        }

        return data[(front + 1) % size];
    }

    void print(){
        if(this->isEmpty()){
            cout<<endl<<"Queue is Empty";
            return;
        }
        cout<<endl<<"Queue Data is : ";
        for(int i = (front + 1) % size; i < rear; i = (i+1) % size){
            cout<<" "<<data[i];
        }
        cout<<" "<<data[rear];
    }
};

int main(){
    Queue q1;

    q1.enqueue(11);
    q1.enqueue(12);
    q1.enqueue(13);
    q1.enqueue(14);
    q1.enqueue(15);

    q1.print();

    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.print();

    q1.enqueue(111);
    q1.print();
    return 1;
}

