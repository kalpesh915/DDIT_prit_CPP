#include<iostream>

using namespace std;

int main(){
    int ip;

    question: /// label
    cout<<" 5 * 5 = ? "<<endl;
    cin>>ip;

    if(ip == 25){
        cout<<endl<<"Correct Answer";
    }else{
        goto question;
    }

}
