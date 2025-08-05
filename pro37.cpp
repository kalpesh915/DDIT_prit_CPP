#include<iostream>

using namespace std;
/**
    switch case
*/

int main(){
    int ip1;

    cout<<"Enter Month Number "<<endl;
    cin>>ip1;

    switch(ip1){
        case 11:
        case 12:
        case 1:
        case 2:{
            cout<<"Winter "<<endl;
            break;
        }
        case 3:
        case 4:
        case 5:
        case 6:{
            cout<<"Summer "<<endl;
            break;
        }
        case 7:
        case 8:
        case 9:
        case 10:{
            cout<<"Monsoon "<<endl;
            break;
        }
        default:{
            cout<<"Month number is out of range"<<endl;
        }
    }
    return 0;
}
