#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Graph{
	private:
		vector<string> nodes;
		int **graph;
		int nodeCount;
	public:
		Graph(int maxNodes){
			nodeCount=0;
			graph= new int*[maxNodes];
			for(int i=0; i<maxNodes; i++){
				graph[i]= new int[maxNodes];
			}
		}
	
 void add_node(const string& v){
 	if(find(nodes.begin(), nodes.end(), v) != nodes.end()){
 		cout<<v<<"is already present"<<endl;
	 }else{
	 	nodes.push_back(v);
	 	nodeCount++;
	 }
 } 	
 
 void add_edge(const string& v1, const string& v2){
	int index1= get_index(v1);
	int index2= get_index(v2);
if(index1== -1 || index2== -1){
	cout<<"one or both vertex are not present";
}else{
	graph[index1][index2]= 1;
	graph[index2][index1]= 1; //for undirect graph
 
}
}

void add_weight(const string& v1, const string& v2, int weight){
	int index1= get_index(v1);
	int index2= get_index(v2);
if(index1== -1 || index2== -1){
	cout<<"one or both vertex are not present";
}else{
	graph[index1][index2]= weight;
	graph[index2][index1]= weight; //for undirect graph
}
}

void delete_node(const string& v){
	int index= get_index(v);
	if(index == -1){
		cout<<v<<"is nor present";
	}else{
		nodes.erase(nodes.begin() + index);
		delete[] graph[index];
		for(int i=index; i<nodeCount -1; i++){
			graph[i]= graph[i+1];
		}
		nodeCount--;
	}
}
 
 void print_graph(){
 	cout<<" \t";
 	for(int i=0; i<nodeCount; i++){
 		cout<<nodes[i]<<" \t";
	 }
	 cout<<endl;
	for(int i=0;i<nodeCount; i++){
		cout<<nodes[i]<<" : ";
		for(int j=0; j<nodeCount; j++){
			cout<<"\t"<<graph[i][j];
		}
		cout<<endl;
	}
 }
 
void printGraph(){
	for(int i=0;i<nodeCount; i++){
		for(int j=0; j<nodeCount; j++){
			graph[i][j]=0;
		}
}
}
 
 private:
 	int get_index(const string& v){
 		vector<string>::iterator it= find(nodes.begin(), nodes.end(),v);
 		   if(it != nodes.end()){
 		   	return distance(nodes.begin(), it);
			}
			return -1;
	 }
};
int main(){
	Graph obj(10);
	int choice;
	string v1,v2;
	int weight;

while(true){
	cout<<"1.add a node"<<endl;
	cout<<"2.add an edge"<<endl;
    cout<<"3.add a weighted edge(undirected)"<<endl;
	cout<<"4.delete a node"<<endl;
	cout<<"5.print node"<<endl;
	cout<<"6. print with zero"<<endl;
    cout<<"0.exit"<<endl;
    cout<<"select your choice"<<endl;
    cin>>choice;
    
switch(choice){
	case 1: cout<<"enter node:";
	         cin>>v1;
	         obj.add_node(v1);
	    break;
	case 2: cout<<"enter vertex:";
	        cin>>v1;
	        cout<<"enter vertex:";
	        cin>>v2;
	      obj.add_edge(v1,v2);
	      cout<<"edge added";
	    break;
	case 3: cout<<"enter vertex:";
	        cin>>v1;
	        cout<<"enter vertex:";
	        cin>>v2;
	        cout<<"enter weight:";
	        cin>>weight;
	      obj.add_weight(v1,v2,weight);
	      break;
	case 4: cout<<"enter vertex to delete:";
	        cin>>v1;
	    obj.delete_node(v1);
	    break;
	case 5: 
	      obj.print_graph();
	      break;
	case 6:
		obj.printGraph();
		break;
	case 0: 
     	return 0;
	default:
		cout<<"invalid choice:";
}
}	

	return 0;
}
