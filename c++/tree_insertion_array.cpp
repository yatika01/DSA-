#include<iostream>
using namespace std;
class treeDemo{
	class GetNode{
		public:
		int data;
		GetNode *leftChild;
		GetNode *rightChild;
		GetNode(int key){
			leftChild=NULL;
			data=key;
			rightChild=NULL;
		}
		
	};
	public:
		GetNode *root=NULL;
		void insert(int key){
			root=insertT(root,key);
			
		}
		GetNode *insertT(GetNode *root,int key){
			if(root==NULL){
				root=new GetNode(key);
				return root;
			}
			if(key<root->data){
				root->leftChild=insertT(root->leftChild,key);
			}else{
				root->rightChild=insertT(root->rightChild,key);
			}
			return root;
		}
		
		
	void inorder(){
				inorderT(root);

		cout<<"inorder traversal";
	}
	void inorderT(GetNode *root){
		if(root!=NULL){
		inorderT(root->leftChild);
		cout<<root->data<<" ";
		inorderT(root->rightChild);
	}
	}
	
	void preorder(){
		cout<<"preorder traversal";
		preorderT(root);
	}
	void preorderT(GetNode *root){
		if(root!=NULL){
		cout<<root->data<<" ";
		preorderT(root->leftChild);
		preorderT(root->rightChild);
	}
}
	
	void postorder(){
		cout<<"postOrder";
		postorderT(root);
	}
	void postorderT(GetNode *root){
		if(root!=NULL){
		postorderT(root->leftChild);
		postorderT(root->rightChild);
     	cout<<root->data<<" ";
	}
}
};
int main(){
int n,key;
    treeDemo obj;
    while(1){
        cout<<endl;
    cout<<"1.append"<<endl;
    cout<<"2.inorder traversal"<<endl;
    cout<<"3.preorder traversal"<<endl;
    cout<<"4. postorder traversal"<<endl;
    cout<<"0.exit"<<endl;
    cout<<"Select any choice"<<endl;
    cin>>n;
	switch(n){
        case 1:{
		int arr[]={36,26,46,21,11,24,41,56,51,66};
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);++i){
        	obj.insert(arr[i]);
		}cout<<"data inserted";
			break;
}
        case 2:obj.inorder();
        break;
        case 3:obj.preorder();
        break;
        case 4:obj.postorder();
        break;
}
}
	return 0;
}
