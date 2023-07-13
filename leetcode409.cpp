#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="A";
    int ans=0;
    map<char,int>mpp;
    for(int i=0;i<str.size();i++){
        mpp[str[i]]++;
    }
    for(auto it:mpp){
        if(it.second%2==0){
            ans+=it.second;
        }
        else if(it.second%2!=0) ans+=it.second-1;
    }
      if(ans==str.size()) {
        cout<< ans;
        exit(0);
      }
    cout<< ans+1;
}