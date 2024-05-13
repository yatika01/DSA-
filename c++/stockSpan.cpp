#include<iostream>
using namespace std;
int main(){
    int price[]={100,80,60,70,60,75,85};
    int n=sizeof(price)/sizeof(price[0]);
    int temp[n];
    temp[0] =1;
    for(int i=1;i<n;i++){
        
        
        if(price[i-1]<price[i]){
           
            temp[i]=8;
        }
        else{
            
            temp[i]=1;
        }
    
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }

    
    return 0;
}
