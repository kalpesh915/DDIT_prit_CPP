/**
    Implementation of Stack with Standard Template Library (STL)
*/

#include<iostream>
#include<stack>

using namespace std;

int main(){

    /// Creating a stack of integers
    stack<int> q;
    q.push(141);
    q.push(151);
    q.push(171);
    q.push(811);
    q.push(911);
    q.push(191);
    q.push(117);
    q.push(161);
    q.push(131);
    q.push(211);

    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}
