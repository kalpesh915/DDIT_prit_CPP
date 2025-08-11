#include<iostream>

using namespace std;

/// blueprint or template
class Demo{
    public:
    int ip; /// variable or property

    /// setter function
    void setIp(int ip){
        this->ip = ip;
        this->getIp();
    }

    /// getter function
    void getIp(){
        cout<<endl<<"value of ip is "<<ip;
    }
};

int main(){
    Demo d1;
    d1.setIp(100);
    return 0;
}
