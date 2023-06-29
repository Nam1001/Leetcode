#include<bits/stdc++.h>
using namespace std;
  bool isAnagram(string s, string t) {
        map<char,int>mpp;
        map<char,int>vpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            vpp[t[i]]++;
        }
        if(mpp==vpp) return true;
        return false;

    }

int main(){
    string s="abced";
    string t="edcba";
   cout<<isAnagram(s,t);
}