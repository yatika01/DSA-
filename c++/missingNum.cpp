#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter size:";
	cin>>n;
	int arr[n];
	cout<<"enter elements:";
	for(int i=0; i<n; i++){
	cin>>arr[i];
	}
	sort(arr,arr+n);
	int k =arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]==k){
			k++;
		}
		else if(arr[i]!=k){
			cout<<"missing element is:"<<i+1<<endl;
			break;
		}
	}
	return 0;
}
