#include<iostream>
using namespace std;
 int fibo(int n){
	if(n<=1){
		return n;
		}
	else
		return fibo(n-1)+fibo(n-2) ;	
}
void fibonacci(int count){
	for(int i=0; i<count;i++){
		cout<<fibo(i)<<" ";
	}
}
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	fibonacci(n);
	return 0;
}
