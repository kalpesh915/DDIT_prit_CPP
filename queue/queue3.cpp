/**
    Implementation of queue with Standard Template Library (STL)
*/

#include<iostream>
#include <queue>

using namespace std;

int main(){

    /// Creating a queue of integers
    queue<int> q;
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
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
