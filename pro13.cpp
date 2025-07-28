#include<iostream>

/**
    Assignment operator
*/

using namespace std;

int main(){
    int ip1 = 10;

    cout<<endl<<ip1;
    /// ip1 = ip1 + 10;
    ip1 += 10; /// value of ip1 is increase by 10 and ans is reasigned to ip1
    cout<<endl<<ip1;
    ip1 -= 10;
    cout<<endl<<ip1;
    ip1 *= 10;
    cout<<endl<<ip1;
    ip1 /= 10;
    cout<<endl<<ip1;
    return 0;
}
