#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="dip*nhj***opst**uo*";
    vector<char>str;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*')
        {
            str.pop_back();
        }
        else{
            str.push_back(s[i]);
        }
    }
    string s1="";
    for(auto it:str)
    {
        s1+=it;
    }
    cout<<s1;
}