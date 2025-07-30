#include<iostream>

using namespace std;

/**
    nested for loop

         *
        * *
       * * *
      * * * *
     * * * * *
*/

int main(){
    int i, j, s;

    for(i=1; i<=5; i++){
        for(s=4; s>=i; s--){
            cout<<" ";
        }
         for(j=1; j <=i; j++){
            cout<<" *";
         }
        cout<<endl;
    }

    return 0;
}
