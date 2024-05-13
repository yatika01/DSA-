#include <bits/stdc++.h>
using namespace std;

void changeElement(stack<int>& St,
                   queue<int>& Q)
{
    int Size = Q.size();
    int Temp = Size;
    int N = St.size();
 
    while (!Q.empty()) {
        St.push(Q.front());
        Q.pop();
    }
 
    while (Size != 0) {
        Q.push(St.top());
        St.pop();
        Size--;
    }

    while (!St.empty()) {
        Q.push(St.top());
        St.pop();
    }
 
    Size = Temp;
 
    while (Size != 0) {
        St.push(Q.front());
        Q.pop();
        Size--;
    }
 
    while (!Q.empty()) {
        St.push(Q.front());
        Q.pop();
    }
    while (N != 0) {
        Q.push(St.top());
        St.pop();
        N--;
    }
}
 

void printStack(stack<int>& St)
{
 
    while (!St.empty()) {
        cout << St.top() << " ";
        St.pop();
    }
    cout << endl;
}

void printQueue(queue<int>& Q)
{
 
    while (!Q.empty()) {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;
}
 
int main()
{
    stack<int> St;
    queue<int> Q;
 
    St.push(4);
    St.push(3);
    St.push(2);
    St.push(1);
 
    Q.push(8);
    Q.push(7);
    Q.push(6);
    Q.push(5);
 
    changeElement(St, Q);
    cout << "Stack = ";
    printStack(St);
    cout << "Queue = ";
    printQueue(Q);
    return 0;
}
