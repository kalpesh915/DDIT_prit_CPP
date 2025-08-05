#include<iostream>
using namespace std;

#define size 5

int main(){
    int ip[size], i, sum = 0;

    for(i = 0; i < size; i++){
        cout<<"Enter value for ip["<<i<<"] \t ";
        cin>>ip[i];
    }

    cout<<endl;

    for(i = 0; i < size; i++){
        sum += ip[i];
    }

    cout<<endl<<"Sum is "<<sum;

    return 0;
}
