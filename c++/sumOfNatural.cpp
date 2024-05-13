#include<iostream>
using namespace std;
int sum(int n){
    int res=0;
	if(n==1){
		return 1;
	}
	else{
		res=n+sum(n-1);
		n--;
	} return res;
}
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
    cout<<sum(n);
    return 0;
}
