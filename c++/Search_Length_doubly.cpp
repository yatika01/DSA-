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
    void append(){
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
    
    void search_node(){
    int key;
        
        cout<<"\nEnter data to be search:";
        cin>>key;
       
        GetNode *newnode=new GetNode();
        
        if(head==NULL){
           cout<<"list is empty";
        }else{
            GetNode *ptr;
            ptr=head;
            
            while(ptr!=NULL){
                ptr=ptr->next;
                if(key==ptr->data){
                    cout<<ptr->data<<" key is found";
                    break;                   
                }
                else{
                    cout<<"key not found";
                }    
            }     
        }
}

void len(){
        GetNode *ptr;
            ptr=head;
            cout<<endl;
            int count=0;

         while(ptr!=NULL){
            
                ptr=ptr->next;
                count++;
            }
            //cout<<"null";
            cout<<"length= "<<count;

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
    cout<<"1.append"<<endl;
    cout<<"2.search node"<<endl;
    cout<<"3.length"<<endl;
    cout<<"4.display "<<endl;
    cout<<"0.exit"<<endl;
    cout<<"Select any choice"<<endl;
    cin>>n;
    switch(n){
        case 1:obj.append();
        break;
        case 2:obj.search_node();
        break;
        case 3:obj.len();
        break;
        case 4:obj.display();
        break;
        case 0:exit(0);
        
    }
    }
    return 0;
}
