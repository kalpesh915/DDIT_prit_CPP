#include<iostream>

using namespace std;

/**
    for loop
*/

int main(){
    int ip, i;

    cout<<"Enter any number to print table ";
    cin>>ip;

    for(i=1; i <= 10; i++){
        cout<<ip<<" * "<<i<<" = "<<ip * i<<endl;
    }

    return 0;
}
