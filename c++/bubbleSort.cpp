#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
    int temp;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
	        }
     	}
	}
//	
//		for(int i=0; i<n-1; i++){
//		for(int j=0; j<n-1; j++){
//			if(arr[j]>arr[j+1]){
//				temp=arr[j+1];
//				arr[j+1]=arr[j];
//				arr[j]=temp;
//	        }
//     	}
//	}
	
	
	cout<<"sorted array:";
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
}

	
	return 0;
}
