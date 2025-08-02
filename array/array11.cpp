#include<iostream>
using namespace std;

/**
    Sort Single dimentional array with bubble sort
*/

#define size 10

int main(){
    int ip[size], i, j, tmp;

    /// scan values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }

    /// Bubble sorting process
    for(i=0; i<size-1; i++){
        for(j=0; j<size - i - 1; j++){
            if(ip[j] > ip[j+1]){
                tmp = ip[j];
                ip[j] = ip[j+1];
                ip[j+1] = tmp;
            }
        }
    }

    /// print sorted values
    cout<<endl;
    for(i=0; i<size; i++){
        cout<<" "<<ip[i];
    }
    return 0;
}
