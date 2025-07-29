#include<iostream>

using namespace std;
/**
    find max value with if else
*/

int main(){

    int ip1, ip2, ans;

    cout<<"Enter value for ip1 "<<endl;
    cin>>ip1;
    cout<<"Enter value for ip2 "<<endl;
    cin>>ip2;

    if(ip1 > ip2){
        ans = ip1;
    }else{
        ans = ip2;
    }

    cout<<"Maximum is "<<ans;

    return 0;
}
