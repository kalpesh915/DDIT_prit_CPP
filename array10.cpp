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
    for(i=0; i<size; i++){ /// 10 time
        for(j=0; j<size; j++){ /// 10 times
            if(ip[i] < ip[j]){
                tmp = ip[i];
                ip[i] = ip[j];
                ip[j] = tmp;
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
