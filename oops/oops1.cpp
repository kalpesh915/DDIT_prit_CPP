#include<iostream>

using namespace std;

/// blueprint or template
class Demo{
    void msg(){
        cout<<endl<<"Welcome to world of OOPs";
    }
};

int main(){
    Demo d; /// instance or object of Demo class
    d.msg();
    return 0;
}
