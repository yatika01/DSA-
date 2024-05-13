#include<iostream>
using namespace std;
		void push(){
		
	}
		void pop(){
		
	}
		void peek(){
		
	}
		void traverse(){
		
	}
int main(){
	int n;
	while(1){
	cout<<"\n 1. Push";
	cout<<"\n 2. Pop";
	cout<<"\n 3. Peek";
	cout<<"\n 4. Traverse";
	cout<<"\n 0. Exit";
	cout<<"select your choice:";
	cin>>n;

	switch(n){
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: peek();
		break;
		case 4: traverse();
		break;
		case 0: exit(0);
		break;
		default:
			cout<<"invalid choice";
	}
}
	
	return 0;

}
