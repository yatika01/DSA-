#include<iostream>
using namespace std;
int top=-1;
const int Capacity=10;
int rear=-1,front=-1;
int queue[Capacity];
int ele;
int loc;
int num;
int isFull(){
	if(rear==Capacity){
		return 1;
	}else{
		return 0;
	}
}
int isEmpty(){
	if(front==rear){
		return 1;
	}
	else{
		return 0;
	}
}
		int insert(){
		cout<<"enter element to be inserted:";
		cin>>ele;
		if(isFull()){
			cout<<"stack is full";
		}else{
			queue[rear]=ele;
			cout<<"element inserted";
			++rear;

	}
		}
	
		int delet(){
//			int ele;
//		cout<<"enter element to be deleted: ";
//		cin>>ele;
//		loc=queue[ele];
//	    ele= queue[rear];
       cout<<"enter element to delete:";
       cin>>num;
		if(isEmpty()){
			cout<<"queue is empty";
		}else{
			for(int i=queue[rear];i>=queue[num]; i--){
			
			queue[i]=queue[i+1];
		}
			--rear;
			cout<<num<<" popped";
		
		}
	}

		int traverse(){
		cout<<"stack elements present: ";
        for(int i=front; i<rear; i++){
        	cout<<queue[i];
		}

		  }
		
	
int main(){
	int n;
	while(1){
	cout<<"\n 1. Insert";
	cout<<"\n 2. Delete";
	cout<<"\n 3. Traverse";
	cout<<"\n 0. Exit"<<endl;
	cout<<"select your choice:";
	cin>>n;

	switch(n){
		case 1: insert();
		break;
		case 2: delet();
		break;
		case 3: traverse();
		break;
		case 0: exit(0);
		break;
		default:
			cout<<"invalid choice";
	}
}
	
return 0;
}
