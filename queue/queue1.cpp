#include<iostream>
#include<vector>
using namespace std;

class Queue{
    vector<int> q1;

    public:
    bool isEmpty(){
        q1.empty();
    }

    /// add element
    void enqueue(int value){
        q1.push_back(value);
    }

    void dequeue(){
        if(!q1.empty()) q1.erase(q1.begin());
    }

    int getFront(){
        return isEmpty() ? -1 : q1.front();
    }

    void display(){
        cout<<endl;
        int i;
        for(i=0; i<q1.size(); i++){
            cout<<" "<<q1[i];
        }
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);

    q.display();

    q.dequeue();
    q.display();

    cout<<endl<<q.isEmpty();
    return 0;
}
