#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size:";
	cin>>n;
	int arr[n];
    int temp;
    int loc=0;
    int min=0;
	cout<<"enter elements:";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<=n-1; i++){
		min=arr[i];
		loc=i;
		for(int j=i+1; j<=n-1; j++){
			if(min>arr[j]){
				min=arr[j];
				loc=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;

	}
	
	cout<<"sorted array:";
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
    }

	
	return 0;
}
