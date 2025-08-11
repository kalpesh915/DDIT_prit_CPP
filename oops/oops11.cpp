#include<iostream>
using namespace std;

class Demo{
    private:
    int ip;

    public:

    Demo(int ip){
        this->ip = ip;
        this->getIp();
    }

    void getIp(){
        cout<<endl<<"Value of ip is "<<ip;
    }
};

int main(){
    Demo d1(110), d2(220), d3(330);
    return 0;
}
