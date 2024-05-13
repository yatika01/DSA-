#include<iostream>
using namespace std;
class Demo{
    class GetNode{
        public:
        int data;
        GetNode *next;
        GetNode *prev;
        GetNode(){
            next=NULL;
            prev=NULL;
        }
    };
    public:
    GetNode *head=NULL;
    void add_at_end(){
        int data;
        cout<<"\nEnter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(head==NULL){
            head=newnode;
        }else{
            GetNode *ptr;
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newnode;
           
        }
    }
    void append(){
        int data;
        cout<<"\nEnter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(head==NULL){
            head=newnode;
            newnode->prev=NULL;
        }else{
            GetNode *ptr;
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newnode;
            newnode->prev=ptr;
            cout<<"newnode is added.";
        }
    }
    void add_at_begin(){
        int data;
        cout<<"\nEnter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(head==NULL){
            head=newnode;
        }else{
            
            newnode->next=head;
            newnode->prev=NULL;
            head=newnode;
            
            
            cout<<"newnode is added.";
        }
    }
    void add_at_position(){
        int data;
        int pos;
        cout<<"\nEnter data:";
        cin>>data;
        cout<<"enter position:";
        cin>>pos;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(head==NULL){
            head=newnode;
        }else{
            GetNode *ptr;
            ptr=head;
            int i=1;
            while(i!=pos-1){
                ptr=ptr->next;
                i++;
            }
            newnode->next=ptr->next;
            ptr->next=newnode;
            newnode->prev=ptr;
           
            
        
            
        }
    }
    

    void add_after_node(){
    int data;
    int key;
    cout<<"enter the data:";
    cin>>data;
    GetNode *newnode=new GetNode();
    newnode->data=data;
    cout<<"enter data aftr newnode will ne added:";
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
            GetNode *ptr1;
            ptr1=ptr->next;
            ptr->next=newnode;
            newnode->next=ptr1;
            newnode->prev=ptr;
            cout<<"Node is added after key...."<<key;
        }
    }

}

void reverse(){
	if(head==NULL){
            head=newnode;
        }else{
            GetNode *ptr;
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            GetNode *last;
            do{
            	 last=ptr;
			}while(last)
            
     }
}

    void display(){
        GetNode *ptr;
            ptr=head;
            cout<<endl;

         while(ptr!=NULL){
            cout<<ptr->data<<"-> ";
                ptr=ptr->next;
            }
            cout<<"null";

    }

};

int main(){
    int n;
    Demo obj;
    while(1){
        cout<<endl;
    cout<<"1.at end"<<endl;
    cout<<"2.display"<<endl;
    cout<<"3.add at position"<<endl;
    cout<<"4. add at begin"<<endl;
    cout<<"5. add after node"<<endl;
        cout<<"6. reverse"<<endl;
    cout<<"0.exit"<<endl;
    cout<<"Select any choice"<<endl;
    cin>>n;
    switch(n){
        case 1:obj.append();
        break;
        case 2:obj.display();
        break;
        case 3:obj.add_at_position();
        break;
        case 4:obj.add_at_begin();
        break;
        case 5:obj.add_after_node();
        break;
        case 6: obj.reverse();
		break;
        case 0:exit(0);
        
    }
    }

    return 0;
}
