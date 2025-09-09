#include <iostream>
using namespace std;
#define size 10
/* Bubble sort */
int main()
{
    // declare required variables
    int ip[size], i, j, tmp;
    
    // get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }
    
    // Bubble sort logic
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(ip[j] > ip[j+1]){
                tmp = ip[j];
                ip[j] = ip[j+1];
                ip[j+1] = tmp;
            }
        }
    }
    
    // print sorted values
    cout<<endl<<"Sorted Values are : ";
    for(i=0; i<size; i++){
        cout<<" "<<ip[i];
    }
    return 0;
}