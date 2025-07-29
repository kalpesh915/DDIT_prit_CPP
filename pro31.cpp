#include<iostream>

using namespace std;
/**
    find max value out of 3 numbers with if else
*/

int main(){

    int ip1, ip2, ip3, ans;

    cout<<"Enter value for ip1 "<<endl;
    cin>>ip1;
    cout<<"Enter value for ip2 "<<endl;
    cin>>ip2;
    cout<<"Enter value for ip3 "<<endl;
    cin>>ip3;

    if(ip1 > ip2 && ip1 > ip3){
        ans = ip1;
    }else if(ip2 > ip1 && ip2 > ip3){
        ans = ip2;
    }else{
        ans = ip3;
    }

    cout<<"Maximum is "<<ans;

    return 0;
}
