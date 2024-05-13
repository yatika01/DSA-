//2 ki table using recursion
#include<iostream>
using namespace std;
void table(int n,int multiple){
	if(n==1){
		cout<<multiple<<endl;
		return;
	}
	else 
	table(n-1,multiple);
	cout<<multiple *n<<endl;
}


int main(){
	int n;
	cout<<"enter range:";
	cin>>n;
    cout<<"multiple of 2 upto"<< n<<" are:"<<endl;
	table(n,5);
	return 0;
}
