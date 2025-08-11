#include<iostream>
using namespace std;

class Demo{
    public:
    int ip;
};

int main(){
    Demo d1;
    d1.ip = 150;
    cout<<endl<<"value of ip is "<<d1.ip;
    return 0;
}
