#include<iostream>
using namespace std;

class Demo{
    private:
    int ip;

    public:
    /**
        Constructor is special function available in OOP languages
        it called autometically when object is created
    */
    Demo(){
        cout<<endl<<"New Object is Created";
    }
};

int main(){
    Demo d1, d2, d3, d4, d5;
    return 0;
}
