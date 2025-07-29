#include<iostream>

using namespace std;
/**
    switch case
*/

int main(){
    int ip1;

    cout<<"Enter Day Number "<<endl;
    cin>>ip1;

    switch(ip1){
        case 1:{
            cout<<"Monday "<<endl;
        }
        case 2:{
            cout<<"Tuesday "<<endl;
        }
        case 3:{
            cout<<"Wednesday "<<endl;
        }
        case 4:{
            cout<<"Thursday "<<endl;
        }
        case 5:{
            cout<<"Friday "<<endl;
        }
        case 6:{
            cout<<"Saturday "<<endl;
        }
        case 0:{
            cout<<"Sunday "<<endl;
        }
        default:{
            cout<<"Day number is out of range"<<endl;
        }
    }

    return 0;
}
