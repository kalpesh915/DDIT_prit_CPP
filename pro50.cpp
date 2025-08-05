#include<iostream>

using namespace std;

/**
    print number in reverse order
*/

int main(){
    int ip, ans = 0;

    cout<<"Enter any Number ";
    cin>>ip; /// 458

    while(ip > 0){
        ans *= 10;
        ans += ip % 10;
        ip = ip / 10;
    }

    cout<<endl<<"Answer is "<<ans;
    return 0;
}
