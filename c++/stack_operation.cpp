#include<iostream>
using namespace std;
int top=-1;
const int Capacity=10;
int stack[Capacity];
int ele;
int isFull(){
	if(top==Capacity-1){
		return 1;
	}else{
		return 0;
	}
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
		int push(){
		cout<<"enter element to be pushed:";
		cin>>ele;
		if(isFull()){
			cout<<"stack is full";
		}else{
			++top;
			stack[top]=ele;
			cout<<"element pushed";
			
		}
	}
		int pop(){
	    int ele= stack[top];
		if(isEmpty()){
			cout<<"stack is empty";
		}else{
			--top;
			cout<<ele<<" popped";
		}
	}
		int peek(){
			cout<<"top element is:";
		cout<<stack[top];
	}
		int traverse(){
		cout<<"stack elements present: ";
		int num=top;
          while(num!=-1){
       	cout<<stack[num]<<endl;
       	num--;

		  }
		}
	
int main(){
	int n;
	while(1){
	cout<<"\n 1. Push";
	cout<<"\n 2. Pop";
	cout<<"\n 3. Peek";
	cout<<"\n 4. Traverse";
	cout<<"\n 0. Exit"<<endl;
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
