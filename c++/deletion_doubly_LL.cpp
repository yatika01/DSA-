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
            newnode->prev=ptr;
            cout<<"newnode is added.";
        }
    }
   void deletion_at_begin(){
    if(head==NULL){
        cout<<"list is empty";
    }
    else{
        GetNode *ptr;
        ptr=head->next;
        head=ptr;
        ptr->prev=NULL;
    }

   }
   void deletion_at_end(){
    if(head==NULL){
        cout<<"list is empty";
    }
    else{
        GetNode *ptr=head;
        GetNode *ptr1=ptr;
        while(ptr->next!=NULL){
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        ptr1->prev=ptr;
       
    }

   }
  
    void delete_at_position(){
        
        int pos;
       
        cout<<"enter position:";
        cin>>pos;
        GetNode *newnode=new GetNode();
        
        if(head==NULL){
           cout<<"list is empty";
        }else{
            GetNode *ptr;
            GetNode *q=ptr->next;
            ptr=head;
            int i=1;
            while(i!=pos-1){
                ptr=ptr->next;
                q=q->next;
                i++;
            }
            q->prev=ptr;
            q->next=q->next->next;
            ptr->next=q->next;
           
           
           
            
        
            
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
    cout<<"1.append"<<endl;
    cout<<"2.display"<<endl;
    cout<<"3.deletion at end"<<endl;
    cout<<"4. deletion at begin"<<endl;
    cout<<"5. delete at position"<<endl;

    cout<<"0.exit"<<endl;
    cout<<"Select any choice"<<endl;
    cin>>n;
    switch(n){
        case 1:obj.append();
        break;
        case 2:obj.display();
        break;
        case 3:obj.deletion_at_end();
        break;
        case 4:obj.deletion_at_begin();
        break;
        case 5:obj.delete_at_position();
        break;
        
        case 0:exit(0);
        
    }
    }


    return 0;
}
