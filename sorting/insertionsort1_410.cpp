#include <iostream>
using namespace std;
#define size 5

int main(){
    int ip[size] = {21, 3, 10, 5, 2};

    for(int i = 0; i < size; i++){
        int key = ip[i];
        int j = i - 1;
        
        while(j >= 0 && ip[j] > key){
            ip[j + 1] = ip[j];
            j--;
        }
        
        ip[j+1] = key;
    }
    
    cout<<endl<<"Sorted Array is : ";
    for(int i = 0; i <size; i++){
        cout<<" "<<ip[i];
    }
    return 0;
}