#include<iostream>
using namespace std;

/**
    Linear Search in array
*/

#define size 10

int main(){
    int ip[size], i, val, flag = 0;

    /// loop for scan values from user
    for(i = 0; i < size; i++){
        cout<<"Enter value for ip["<<i<<"] \t ";
        cin>>ip[i];
    }

    /// get value for search in array
    cout<<endl<<"Enter value for search in array \t";
    cin>>val;

    /// logic of searching value in array
    for(i = 0; i < size; i++){
        if(val == ip[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout<<endl<<"Value is found on index "<<i;
    }else{
        cout<<endl<<"Value is not found";
    }

    return 0;
}
