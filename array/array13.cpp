#include<iostream>
#define size 10

using namespace std;
/**
    Sort array elements with use of Insertion sort
*/

int main(){
    int ip[size], i, j, tmp, key;

    /// Get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }

    /// Insertion sort process
    for(i=1; i<size; i++){
        key = ip[i];
        j = i - 1;

        while(j >= 0 && ip[j] > key){
            ip[j+1] = ip[j];
            j--;
        }

        ip[j+1] = key;
    }


    /// printing sorted elements of array
    cout<<endl<<"Sorted values of array : ";
    for(i=0; i<size; i++){
        cout<<ip[i]<<" ";
    }
    return 0;
}
