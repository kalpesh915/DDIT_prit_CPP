#include<iostream>

/**
    relational operator
*/

using namespace std;

int main(){
    int ip1 = 20, ip2 = 3, ip3 = 20;

    cout<<endl<< (ip1 > ip2); ///
    cout<<endl<< (ip1 < ip2); ///
    cout<<endl<< (ip1 > ip3); ///
    cout<<endl<< (ip1 >= ip3); ///

    cout<<endl<< (ip1 < ip3); ///
    cout<<endl<< (ip1 <= ip3); ///

    cout<<endl<< (ip1 != ip3); ///
    cout<<endl<< (ip1 == ip3); ///

    return 0;
}
