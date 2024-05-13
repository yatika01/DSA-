#include<iostream>
using namespace std;
class LinkedListDemo{
	class GetNode{
		public:
			int data;
			GetNode *next;
			GetNode(){
				next=NULL;
			}
	};
	
public:
	GetNode *head=NULL;
		GetNode *last=NULL;

	void append(){
		int data;
		cout<<"\n enter data:";
		cin>>data;
		GetNode *NewNode=new GetNode();
		NewNode->data=data;
		
		if(last==NULL){
			last=NewNode;
			NewNode->next=NewNode;
			last->next=last;
		}
		else{
			NewNode->next=last->next;
			last->next=NewNode;
			last=NewNode;
		}
	}
	
	void addAtBegin(){
		int data;
		cout<<"\n enter data:";
		cin>>data;
		GetNode *NewNode=new GetNode();
		NewNode->data=data;
		
		if(last==NULL){
    cout<<"linked list not present";
		}
		else{
			NewNode->next=last->next;
			last->next=NewNode;
           cout<<"new node is added";
		}
	}
	
	void add_after(){
int data;
    int key;
    cout<<"enter the data:";
    cin>>data;
    GetNode *NewNode=new GetNode();
    NewNode->data=data;
    cout<<"enter key after newnode will ne added:";
    cin>>key;
    
    if(last==NULL){
        cout<<"linked list  not present.";
    }
    else{
        GetNode *ptr;
        ptr=last->next;
        while(ptr->next!=last->next){
            if(key==ptr->data){
                break;
            }
            else{
                ptr=ptr->next;
            }
        }
        if(ptr->next==last->next){
            cout<<"key not present";
        }
        else{
            GetNode *ptr1;
            ptr1=ptr->next;
            ptr->next= NewNode;
            NewNode->next=ptr1;
            cout<<"Node is added after key...."<<key;
        }
    }
	}
	
	
	void display(){
if(last==NULL){
	cout<<"list is empty"<<endl;
	return;
}
GetNode *ptr=last->next;
do{
	cout<<ptr->data<<"->";
	ptr=ptr->next;
}while(ptr!=last->next);
}
};
int main(){
	int n;
	LinkedListDemo obj;
	while(1){
	cout<<"\n 1. append(addAtEnd)";
	cout<<"\n 2. addAtBegin";
	cout<<"\n 3. append after node";
	cout<<"\n 4. display";
	cout<<"\n 0. Exit";
	cout<<"select your choice:";
	cin>>n;

	switch(n){
		case 1: obj.append();
		break;
		case 2: obj.addAtBegin();
		break;
		case 3: obj.add_after();
		break;
		case 4: obj.display();
		break;
		case 0: exit(0);
		break;
		default:
			cout<<"invalid choice";
	}
}
return 0;
}
