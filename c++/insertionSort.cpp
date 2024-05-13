#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
    int temp;
    int loc;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=1; i<n-1; i++){
		temp=arr[i];
		loc=i-1;
	   while(loc>=0 && arr[loc]>temp){
	   	arr[loc+1]=arr[loc];
	   	loc--;
	   }
	   arr[loc+1]=temp;
	}
	
	cout<<"sorted array:";
	for(int i=0; i<n-1;i++){
		cout<<arr[i]<<" ";
}

	
	return 0;
}
