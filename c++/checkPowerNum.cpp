#include<iostream>
using namespace std;
int main(){
	int n=16,flag=0;
	for(int i =1; i<=n; i++){
		if(i*i*i*i==n){
			flag=1;
			break;
		}
	}
if(flag==1){
	cout<<"true";
}
else{
	cout<<"false";
}
return 0;
}
