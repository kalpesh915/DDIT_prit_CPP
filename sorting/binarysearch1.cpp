#include <iostream>
using namespace std;
#define size 10

/* Binary search */

int main()
{
    // declare required variables
    int ip[size], i, key, low, high, mid, flag = -1;
    
    // get values from user
    cout<<endl<<"Must Enter Sorted values Only : ";
    for(i=0; i<size; i++){
        cout<<endl<<"Enter value for ip["<<i<<"] \t";
        cin>>ip[i];
    }
    
    // get value for search in array
    cout<<endl<<"Enter value for search in Array \t";
    cin>>key;
    
    // logic
    low = 0;
    high = size - 1;
    while(low <= high){
        mid = low + (high - low) / 2;
        
        if(ip[mid] == key){
            flag = key;
            break;
        }
        
        if(ip[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    
    
    // print result
    if(flag == -1){
        cout<<endl<<key<<" is not exist in array";
    }else{
        cout<<endl<<key<<" is exist in array on "<<mid<<" Index";
    }
    
    return 0;
}