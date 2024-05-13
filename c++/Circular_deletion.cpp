#include <iostream>
#include <stdlib.h>
using namespace std;
class CirLinkedListDemo{
	class GetNode{
		public:
		int data;
		GetNode *next;
		public:
		GetNode(){
			next=NULL;
		}
    };
    public:
    GetNode *head,*last=NULL;
    void append(){
    	int data;
    	cout<<"Enter data: ";
    	cin>>data;
    	GetNode *newNode=new GetNode();
    	    	newNode->data=data;
    	 if (last==NULL){
    		last=newNode; 		
    		newNode->next=newNode;
    	    last->next=last;
    	}
    	else{
    		newNode->next= last->next;   
    		last->next=newNode; 	
    		last=newNode;	

    	}
    }
    
    void deleteAtAfter(){
    	
    	cout<<"Enter data after Node will be deleted: ";
    	int key;
    	cin>>key;
    	if (last==NULL){
    		cout<<"Linked list not present ";
    	}
    	else{
    		GetNode *ptr;
    		ptr=last->next;
    		while (ptr->next!=last->next) {
    			if (key==ptr->data) {
    				break;
    			}
    			else{
    				ptr=ptr->next;
    			}
    		}
    		if (ptr->next==last->next) {
    			cout<<"Key not present.. ";
    		}
    		else{
    			GetNode *ptr1,*ptr2;
    			ptr1=ptr->next;
    			ptr2=ptr1->next;
    			ptr->next=ptr2;
    			cout<<"Node "<<ptr1->data<<" is deleted..";
    		}
    		
    	}
    }
    void deleteAtBegin(){
    	if (last==NULL){
    		cout<<"Linked list present ";
    	}
    	else{
    		GetNode *ptr;
    		ptr=last->next;
    		last->next=ptr->next;
    		cout<<"Node is deleted  at begin ";
    	}
    }
    void deleteAtEnd(){
    	if (last==NULL){
    		cout<<"Linked list not present";
    	}
    	else{
    		GetNode *ptr=last->next;
    		GetNode *ptr1=ptr;
    		GetNode *first=last->next;
    		while(ptr->next!=last->next){
    			ptr1=ptr;
    			ptr=ptr->next;
    		}
    		ptr1->next=first;
    		last=ptr1;
    		
    		cout<<"Node is deleted  at end ";	
    	}
    }
    
        void display() {
	    if (last == NULL) {
	        cout << "List is empty." << endl;
	        return;
	    }
	    GetNode *ptr = last->next;
	    do {
	        cout << ptr->data << " -> ";
	        ptr = ptr->next;
	    } while (ptr != last->next);
   }
} ;  
		int main() {
			CirLinkedListDemo obj;
			int n;
			while(true){
    		cout<<"\n\n1. Append (Add at end)";
	    	cout<<"\n2. Delete at begin";
	    	cout<<"\n3. Delete at after";
	    	cout<<"\n4. Delete at end";
	    	cout<<"\n5. Display";
	    	cout<<"\n0. Exit"<<endl;
	    	cout<<"select yout choice:";
	    	cin>>n;
	    	switch (n) {
	    		case 1: obj.append();
	    			    break;
	    		case 2: obj.deleteAtBegin();
	    			    break;
	    		case 3: obj.deleteAtAfter();
	    			    break;
	    		case 4: obj.deleteAtEnd();
	    			    break;
	    		case 5: obj.display();
	    			    break;
	    		case 0: exit(0);
	    	}
    	  }
		}
