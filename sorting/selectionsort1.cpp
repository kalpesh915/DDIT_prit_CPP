#include <iostream>
using namespace std;
#define size 10

/* Selection sort */

int main()
{
    // declare required variables
    int ip[size], i, j, tmp, key;
    
    // get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }
    
    // Selection sort logic
    for(i=0; i<size; i++){
        key = i;
        for(j=i; j<size; j++){
            if(ip[j] < ip[key]){
                key = j;
            }
        }
        tmp = ip[key];
        ip[key] = ip[i];
        ip[i] = tmp;
    }

    
    // print sorted values
    cout<<endl<<"Sorted Values are : ";
    for(i=0; i<size; i++){
        cout<<" "<<ip[i];
    }
    return 0;
}