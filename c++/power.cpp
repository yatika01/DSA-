 #include<iostream>
using namespace std;
int power(int base, int expo){
	if(expo==0){
		return 1;
	}
	else{
		return base*power(base,expo-1);
	}
}
int main(){
	int b,e;
	cout<<"enter base and expo:";
	cin>>b>>e;
	cout<<power(b,e);
	return 0;
}
