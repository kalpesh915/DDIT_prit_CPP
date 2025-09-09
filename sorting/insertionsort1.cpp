#include <iostream>
using namespace std;
#define size 10

/* Insertion sort */

int main()
{
    // declare required variables
    int ip[size], i, j, tmp, key;
    
    // get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }
    
    // Insertion sort logic
    for(i=0; i<size; i++){
        key = ip[i];
        j = i - 1;
        while(j >= 0 && ip[j] > key){
            ip[j+1] = ip[j];
            j--;
        }
        ip[j+1] = key;
    }

    
    // print sorted values
    cout<<endl<<"Sorted Values are : ";
    for(i=0; i<size; i++){
        cout<<" "<<ip[i];
    }
    return 0;
}