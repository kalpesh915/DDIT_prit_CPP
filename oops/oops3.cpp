#include<iostream>

using namespace std;

/// blueprint or template
class Demo{
    public:
    void msg(){
        cout<<endl<<"Welcome to world of OOPs";
    }
};

int main(){
    Demo d1, d2, d3; /// instance or object of Demo class
    d1.msg();
    d2.msg();
    d3.msg();
    return 0;
}
