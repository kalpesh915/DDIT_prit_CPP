#include<iostream>
using namespace std;

#define size 5

int main(){
    int ip[size], i, max = 0;

    for(i = 0; i < size; i++){
        cout<<"Enter value for ip["<<i<<"] \t ";
        cin>>ip[i];
    }

    cout<<endl;

    for(i = 0; i < size; i++){
        if(max < ip[i]){
            max = ip[i];
        }
    }

    cout<<endl<<"Max is "<<max;

    return 0;
}
