#include<iostream>
using namespace std;
class Demo{
    class GetNode{
        public:
        int data;
        GetNode *next;
        GetNode *prev;
        GetNode *right;
        GetNode *left;

        GetNode(){
            next=NULL;
            prev=NULL;
            right=NULL;
            left=NULL;
        }
    };
    public:
    GetNode *head=NULL,*last=NULL;
    void append(){
        int data;
        cout<<"\nEnter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(last==NULL){
            head=newnode;
            last=newnode;
            newnode->left=newnode;
            newnode->right=newnode;
        }else{
             newnode->left=last;
             newnode->right=head;
             last->right=newnode;
             head->left=newnode;
             last=newnode;
        }
    }
    void add_at_begin(){
        int data;
        cout<<"\nEnter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(last==NULL){
            cout<<"list not present";
        }else{      
            newnode->right=last->right;
            newnode->left=last;
            last->right=newnode;
            head=newnode;
            cout<<"newnode is added.";
        }
    }
    
    
    void add_after(){
        int data;
        int key;
        cout<<"\nEnter data:";
        cin>>data;
        cout<<"enter key:";
        cin>>key;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(last==NULL){
        cout<<"list not present";
        }else{
            GetNode *ptr;
            ptr=head;
           while(ptr->right!=NULL){
           	if(key==ptr->data){
           		break;
			   }
			   else{
			   	ptr=ptr->next;
			   }
		   }
		   if(ptr->right=NULL){
		   	cout<<"key not found";
		   }
		   else{
		   	GetNode *ptr1;
            ptr1=ptr->next;
            ptr->next= newnode;
            newnode->next=ptr1;
            cout<<"Node is added after key...."<<key;
		   }
            }

    }
    
    
    void display(){
        if(last==NULL){
        	cout<<"list is empty"<<endl;
        	return;
		}
		GetNode *ptr=head;
		do{
			cout<<ptr->data<<"->";
			ptr=ptr->right;
		}while(ptr!=head);
          cout<<endl;
    }

};

int main(){
    int n;
    Demo obj;
    while(1){
        cout<<endl;
    cout<<"1.at end(append)"<<endl;
    cout<<"2.add at begin"<<endl;
    cout<<"3. add after node"<<endl;
    cout<<"4. display "<<endl;
    cout<<"0.exit"<<endl;
    cout<<"Select any choice"<<endl;
    cin>>n;
    switch(n){
        case 1:obj.append();
        break;
        case 2:obj.add_at_begin();
        break;
        case 3:obj.add_after();
        break;
        case 4:obj.display();
        break;
        case 0:exit(0);
        
    }
    }

    return 0;
}
