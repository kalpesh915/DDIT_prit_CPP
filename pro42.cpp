#include<iostream>

using namespace std;

/**
    nested for loop

    *
    **
    ***
    ****
    *****
*/

int main(){
    int i, j;

    for(i=1; i<=5; i++){
         for(j=1; j <=i; j++){
            cout<<i;
         }
        cout<<endl;
    }

    return 0;
}
