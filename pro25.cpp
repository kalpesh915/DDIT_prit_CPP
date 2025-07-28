#include<iostream>

/**
    Ternary operator

    Condition ? True part : False part
*/

using namespace std;

int main(){
    int ip1, ip2, ans;

    cout<<"Enter value for ip1 ";
    cin>>ip1;
    cout<<"Enter value for ip2 ";
    cin>>ip2;

    ans = (ip1 > ip2 ? ip1 : ip2);

    cout<<endl<<"Maximum is "<<ans;

    return 0;
}
