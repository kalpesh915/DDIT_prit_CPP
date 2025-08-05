#include<iostream>
#define size 10

using namespace std;
/**
    Sort array elements with use of bubble sort
*/

int main(){
    int ip[size], i, j, tmp;

    /// Get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }

    /// bubble sort process
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(ip[j] > ip[j+1]){
                tmp = ip[j];
                ip[j] = ip[j+1];
                ip[j+1] = tmp;
            }
        }
    }

    /// printing sorted elements of array
    cout<<endl<<"Sorted values of array : ";
    for(i=0; i<size; i++){
        cout<<ip[i]<<" ";
    }
    return 0;
}
