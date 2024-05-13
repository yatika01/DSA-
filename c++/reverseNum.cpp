#include<iostream>
using namespace std;
int number(int n){
	if(n==0){
		return 0;
	}
    cout<<n<<" ";
	return number(n-1);		
	
}
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
    cout<<number(n);
    return 0;
}
