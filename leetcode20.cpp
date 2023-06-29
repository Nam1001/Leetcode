#include<bits/stdc++.h>
using namespace std;


int main(){
    string str=")(){}";
    stack<char>st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='[' || str[i]=='(' || str[i]=='{'){
            st.push(str[i]);    
        }
      else  if(str[i]==']' && !st.empty()){
           if(st.top()=='[') st.pop();

        }
        else if(str[i]=='}'&& !st.empty()) {
            if(st.top()=='{') st.pop();
        }

        else if(str[i]==')' && !st.empty()) {
           if( st.top()=='(') st.pop();
        }
        else{
            st.push(str[i]);
        }
    }
    if(st.size()){
        cout<< false;
        exit(0);
    } 
    cout<< true;
}