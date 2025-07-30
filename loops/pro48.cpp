#include<iostream>

using namespace std;

/**
    count how many digits in entered number

    7756799 = 7
*/

int main(){
    int ip, ans = 0;

    cout<<"Enter any Number ";
    cin>>ip; /// 458

    while(ip > 0){
        ans++;
        ip = ip / 10;
    }

    cout<<endl<<"Answer is "<<ans;
    return 0;
}
