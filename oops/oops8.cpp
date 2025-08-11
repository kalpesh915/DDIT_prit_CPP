#include<iostream>
using namespace std;

class Demo{
    private:
    int ip;

    public:
    void setIp(int ip){
        this->ip = ip;
    }

    void getIp(){
        cout<<endl<<"ip is "<<ip;
    }
};

int main(){
    Demo d1;
    d1.setIp(125);
    d1.getIp();
    ///d1.ip = 150;
    ///cout<<endl<<"value of ip is "<<d1.ip;
    return 0;
}
