#include<iostream>

/**
    Bitwise or operators
*/

using namespace std;

int main(){
    int ip1 = 10, ip2 = 8;

    /**
            Decimal     binary
            10          1010
            8           1000
        |  10           1010
    */

    cout<<endl<<( ip1 | ip2);
    return 0;
}
