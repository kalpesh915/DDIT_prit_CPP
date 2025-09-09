#include <iostream>
using namespace std;
#define size 10

/* Linear search */

int main()
{
    // declare required variables
    int ip[size], i, j, flag = -1, key;
    
    // get values from user
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }
    
    // get value for search in array
    cout<<endl<<"Enter value for search in Array \t";
    cin>>key;
    
    // logic
    for(i=0; i<size; i++){
        if(ip[i] == key){
            flag = i;
            break;
        }
    }

    
    // print result
    if(flag == -1){
        cout<<endl<<key<<" is not exist in array";
    }else{
        cout<<endl<<key<<" is exist in array on "<<flag<<" Index";
    }
    
    return 0;
}