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
            break;
        }
        case 1.1:{
            cout<<"Tuesday "<<endl;
            break;
        }
        case 3:{
            cout<<"Wednesday "<<endl;
            break;
        }
        case 4:{
            cout<<"Thursday "<<endl;
            break;
        }
        case 5:{
            cout<<"Friday "<<endl;
            break;
        }
        case 6:{
            cout<<"Saturday "<<endl;
            break;
        }
        case 0:{
            cout<<"Sunday "<<endl;
            break;
        }
        default:{
            cout<<"Day number is out of range"<<endl;
            break;
        }
    }

    return 0;
}
