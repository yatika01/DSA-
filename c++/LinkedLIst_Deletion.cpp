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
	
	void addAtEnd(){
		int data;
		cout<<"\n enter data:";
		cin>>data;
		GetNode *NewNode=new GetNode();
		NewNode->data=data;
		
		if(head==NULL){
			head=NewNode;
		}
		else{
			GetNode *ptr;
			ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
				ptr->next=NewNode;
           cout<<"new node is added";
		}
	}
	
void dlt_At_begin(){
	if(head==NULL){
		cout<<"linked list present";
	}
	else{
		GetNode *ptr;
		ptr=head->next;
		head=ptr;
		cout<<"node is deleted at beginning";
	}
}

void dlt_At_end(){
	if(head==NULL){
		cout<<"linked list not present";
	}
	else{
		GetNode *ptr=head;
	   GetNode *ptr1=ptr;
	   while(ptr->next!=NULL){
	   	ptr1=ptr;
	   	ptr=ptr->next;
	   }
         ptr1->next=NULL;
         cout<<"node deleted at end";
	}
}

dlt_At_after(){
    int key;
    cout<<"enter key after node will be deleted:";
    cin>>key;
    if(head==NULL){
        cout<<"linked list  not present.";
    }
    else{
        GetNode *ptr;
        ptr=head;
        while(ptr->next!=NULL){
            if(key==ptr->data){
                break;
            }
            else{
                ptr=ptr->next;
            }
        }
        if(ptr->next==NULL){
            cout<<"key not present";
        }
        else{
//            GetNode *ptr1;
            ptr=ptr->next;
             
			}
            cout<<"Node is deleted after key...."<<key;
        }
    }


	void display(){
		GetNode *ptr;
		ptr=head;
		cout<<endl;
		while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
			cout<<"null";

}
};

int main(){
	int n;
	LinkedListDemo obj;
	while(true){
	cout<<"\n 1. addAtEnd";
	cout<<"\n 2. display";
		cout<<"\n 3. delete_At_begin";
	cout<<"\n 4. delete_At_end";
	cout<<"\n 5. delete_At_after";
	cout<<"\n 0. Exit"<<endl;
	cout<<"select your choice:";
	cin>>n;

	switch(n){
		case 1: obj.addAtEnd();
		break;
		case 2: obj.display();
		break;
		case 3: obj.dlt_At_begin();
		break;
		case 4: obj.dlt_At_end();
		break;
		case 5: obj.dlt_At_after();
		break;
		case 0: exit(0);
		break;
		default:
			cout<<"invalid choice";
	}
}
return 0;
}
