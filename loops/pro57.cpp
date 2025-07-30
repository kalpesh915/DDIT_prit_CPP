#include<iostream>

using namespace std;

int main(){
    int ip = 1;

    loop:
    cout<<" "<<ip;

    ip++;
    if(ip <= 10){
        goto loop;
    }

}
