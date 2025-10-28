#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr){
    for(int i = 0; i < arr.size(); ++i){
        cout<<arr[i]<<" ";
    }
}

void heapify(vector<int> &arr, int n, int i){
    // To heapify a subtree rooted with node i which is an index in arr[].
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left index = 2*i + 1
    int r = 2 * i + 2; // right index = 2*i + 2
    
    if(l < n && arr[l] > arr[largest]){ // If left child is larger than root
        largest = l;
    }
    
    if(r < n && arr[r] > arr[largest]){ // If right child is larger than root
        largest = r;
    }
    
    if(largest != i){// If largest is not root
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);// Recursively heapify the affected sub-tree
    }
}


void heapSort(vector<int> &arr){
    int n = arr.size();
    //Build heap (rearrange vector)
    for(int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
    
    for(int i = n - 1; i > 0; i--){
        swap(arr[0], arr[i]); // Move current root to end
        heapify(arr, i, 0);// Call max heapify on the reduced heap
    }
}

int main(){
    vector<int> arr = { 9, 4, 3, 8, 10, 2, 5 };
    heapSort(arr);
    cout<<endl<<"Sorted Values are : ";
    printArray(arr);
    return 0;
}