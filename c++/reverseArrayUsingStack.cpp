#include <iostream>
#include <string.h>
using namespace std;
int top = -1;
const int CAPACITY = 10;
int arr[CAPACITY];
int isFull()
{
    if (top == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char a)
{

    if (isFull())
    {
        cout << "Stack is full";
    }
    else
    {
        ++top;
        arr[top] = a;
    }
}
void traverse()
{
    cout << "\nElements of the stack:";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << " Element of array :";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < 5; i++)
    {
        push(arr[i]);
    }
    traverse();
    return 0;
}
