#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	int loc;
	int beg=0;
	int end=n-1;
	int mid=beg+end/2;
	int key;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"enter key to search:";
	cin>>key;
	while(key!=arr[mid]){
		if(key<arr[mid]){
		    end=mid-1;
			}
			if(key>arr[mid]){
				beg=mid+1;
			}
			 mid=beg+end/2;
		}
		if(key==arr[mid]){
			loc=mid;
			cout<<"element found at: "<<loc;
		}
		else{
			cout<<"element not found";
		}
	
//		if(flag==1){
//			cout<<"search successful";
//			cout<<key<<" found at: "<<loc;
//		}
//		else{
//			cout<<"unsuccessful";
//		}
	
	return 0;
}
