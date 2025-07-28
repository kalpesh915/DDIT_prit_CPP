#include<iostream>

/**
    Logical operator
*/

using namespace std;

int main(){
    int ip1 = 20, ip2 = 3, ip3 = 15;

    cout<<endl<< (ip1 > ip2 || ip1 > ip3);
    cout<<endl<< !(ip1 > ip2 || ip1 > ip3);
    return 0;
}
