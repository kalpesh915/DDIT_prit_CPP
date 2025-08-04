#include<iostream>
using namespace std;

class Stack{
    int top, cap, *a;

    public:
    /// constructor for Stack
    Stack(int cap){
        this->cap = cap;
        top = -1;
        a = new int[cap];
    }

    /// Destructor for Stack
    ~Stack(){
        delete[] a;
    }

    /// Push
    bool push(int x){
        if(top >= cap -1){
            cout<<endl<<"Stack Overflow";
            return false;
        }else{
            a[++top] = x;
            return true;
        }
    }

    int pop(){
        if(top < 0){
            cout<<endl<<"Stack Underflow";
            return 0;
        }

        return a[top--];
    }

    int peek(){
        if(top < 0){
            cout<<endl<<"Stack is Empty";
            return 0;
        }

        return a[top];
    }

    bool isEmpty(){
        return top < 0;
    }

    bool isFull(){
        return top >= cap - 1;
    }
};


int main(){
    Stack s1(5);

    s1.push(11);
    s1.push(61);
    s1.push(55);
    s1.push(58);
    s1.push(45);

    /// s1.push(11);
    cout<<endl<<s1.pop();
    ///cout<<endl<<s1.pop();
    ///cout<<endl<<s1.pop();
    ///cout<<endl<<s1.pop();

    cout<<endl<<"Peek "<<s1.peek();

    ///cout<<endl<<"is Empty "<<s1.isEmpty();
    ///cout<<endl<<"is Full "<<s1.isFull();

    while(!s1.isEmpty()){
        cout<<endl<<" "<<s1.peek();
        s1.pop();
    }
    return 0;
}
