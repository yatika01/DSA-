#include <bits/stdc++.h>
using namespace std;

int getMissingNo(int a[], int num)
{

    int n = num + 1;
    int total = (n) * (n + 1) / 2;
    for (int i = 0; i < num; i++)
        total -= a[i];
    return total;
}

int main()
{
   int n;
   cout<<"enter the size:";
   cin>>n;
   int arr[n];
   cout<<"enter elements:";
   for(int i=0; i<n; i++){
   	cin>>arr[i];
   }
  
    // Function call
    int miss = getMissingNo(arr, n);
    cout << miss;
    return 0;
}
