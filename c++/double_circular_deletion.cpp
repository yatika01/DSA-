    void dlt_after(){
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
		   	GetNode *ptr1,*ptr2;
    			ptr1=ptr->right;
    			ptr2=ptr1->right;
    			ptr->right=ptr2;
              	ptr2->left=ptr;
    			cout<<"Node "<<ptr1->data<<" is deleted..";
		   }
            }

    }
