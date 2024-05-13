#include<iostream>
#include<string>
#include<stack>
using namespace std;
string reverse(string input){
    int len = input.length();
    stack<char> chst;
    
        for ( int i = 0; i < input.length(); ++i) {
        char ch = input[i];
        chst.push(ch);
   }
//    for(char c: input){
//        chst.push(c);
//    }
    string reversedString = "";

    while (! chst.empty()) {
        reversedString += chst.top();
        chst.pop();
    }

    return reversedString;
}
int main(){
    cout<<"enter a string : ";
    string input;
    getline(cin,input);
//    string rev =reverse(input);
    cout<<"reversed string: "<<reverse(input);
}
