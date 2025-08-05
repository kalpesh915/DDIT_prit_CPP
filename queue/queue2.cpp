/**
    Implementation of queue with Array
*/

#include<iostream>
#define size 10

using namespace std;

class Queue{
    public:
    int array[size], front, rear;

    Queue(){
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        return front == -1 || front > rear;
    }

    bool isFull(){
        return rear == size -1;
    }

    int getFront(){
        if(isEmpty()){
            cout<<endl<<"Queue is Empty";
            return -1;
        }

        return array[front];
    }

    int getRear(){
        if(isEmpty()){
            cout<<endl<<"Queue is Empty";
            return -1;
        }

        return array[rear];
    }

    void enqueue(int value){
        if(isFull()){
            cout << "Queue is full" << endl;
            return;
        }

        if(isEmpty()){
            front = 0;
        }

        rear++;
        array[rear] = value;
    }

    int dequeue(){
        /// Check underflow condition
        if (isEmpty()) {
            cout<< "Queue is empty" << endl;
            return -1;
        }

        int ans = array[front];
        front++;

        if(isEmpty()){
            rear = front = -1;
        }

        return ans;
    }

    void display(){
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue:  ";
        for(int i = front; i <= rear; i++){
            cout<<" "<<array[i];
        }
        cout << endl;
    }
};

int main(){
    /// Created Queue of size 10
    Queue q;
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.enqueue(16);
    q.enqueue(17);
    q.enqueue(18);
    q.enqueue(19);

    q.display();

    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<endl;
    q.display();

    q.enqueue(100);
    q.display();
    return 0;
}
