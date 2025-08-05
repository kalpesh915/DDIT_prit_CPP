#include<iostream>
using namespace std;

#define size 5

int main(){
    int ip[size], i;

    for(i = 0; i < size; i++){
        cout<<"Enter value for ip["<<i<<"] \t ";
        cin>>ip[i];
    }

    cout<<endl;

    for(i = 0; i < size; i++){
        cout<<" "<<ip[i];
    }

    return 0;
}
