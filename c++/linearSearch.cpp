#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	int flag=0;
	int loc;
	int key;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"enter key to search:";
	cin>>key;
	for(int i=0; i<n; i++){
		if(arr[i]==key){
			flag=1;
			loc=i;
			break;
		}
	}
		if(flag==1){
			cout<<"search successful";
			cout<<key<<" found at: "<<loc;
		}
		else{
			cout<<"unsuccessful";
		}
	
	return 0;
}
