#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"enter size:";
	cin>>n>>m;
	
	int arr1[n];
	int arr2[m];
	
   cout<<"enter elements of arr1:";
	for(int i=0; i<n; i++){
		cin>>arr1[i];
	}
	   cout<<"enter elements of arr2:";
	for(int i=0; i<m; i++){
		cin>>arr2[i];
	}
	
	
	int arr3[100];

  int i=0,j=0,k=0;
   while(i<n && j<m){
	if(arr1[i]<arr2[j]){
		arr3[k++]= arr1[i++];
	}
	else{
		arr3[k++]=arr2[j++];
	}
}

   while(i<n){
	arr3[k++]== arr1[i++];
}
  while(j<m){
	arr3[k++]=arr2[j++];
}
	
	cout<<"sorted array:";
	for(int i=0; i<n+m;i++){
		cout<<arr3[i]<<" ";
    }

	
	return 0;
}
