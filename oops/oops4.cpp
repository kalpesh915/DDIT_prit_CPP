#include<iostream>

using namespace std;

/// blueprint or template
class Demo{
    public:
    int ip; /// variable or property

    /// setter function
    void setIp(int ip){
        /// ip = ip;
        this->ip = ip;
    }

    /// getter function
    void getIp(){
        cout<<endl<<"value of ip is "<<ip;
    }
};

int main(){
    Demo d1;
    d1.setIp(100);
    d1.getIp();
    return 0;
}
