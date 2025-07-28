#include<iostream>

/**
    find maximum out of three integers with use of Ternary operator
    Condition ? True part : False part
*/

using namespace std;

int main(){
    int ip1, ip2, ip3, ans;

    cout<<"Enter value for ip1 ";
    cin>>ip1;
    cout<<"Enter value for ip2 ";
    cin>>ip2;
    cout<<"Enter value for ip3 ";
    cin>>ip3;

    /**
        ip1 = 10
        ip2 = 200
        ip3 = 30
    */

    ans = (ip1>ip2 ? (ip1>ip3 ? ip1 : ip3) : (ip2>ip3 ? ip2 : ip3));

    cout<<endl<<"Maximum is "<<ans;

    return 0;
}
