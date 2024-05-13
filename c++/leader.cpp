#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void func(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        int j;
        for (j=i+1;j<size;j++)
        {
            if (arr[i] <=arr[j])
                break;
        } 
        if (j == size) 
            cout << arr[i] << " ";
}
}

int main()
{
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0; i<arr[n]; i++){
        cin>>arr[i];
    }
    func(arr, n);
    return 0;
}
