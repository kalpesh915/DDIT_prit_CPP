#include<iostream>
#define size 10

using namespace std;
/**
    Sort array elements with use of Selection sort
*/

int main(){
    int ip[size], i, j, tmp, key;

    /// Get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }

    /// Selection sort process
    for(i=0; i<size-1; i++){
        key = i;

        for(j=i+1; j<size; j++){
            if(ip[j] < ip[key]){
                key = j;
            }
        }

        /// swap process
        tmp = ip[i];
        ip[i] = ip[key];
        ip[key] = tmp;
    }

    /// printing sorted elements of array
    cout<<endl<<"Sorted values of array : ";
    for(i=0; i<size; i++){
        cout<<ip[i]<<" ";
    }
    return 0;
}
