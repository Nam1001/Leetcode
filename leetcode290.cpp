#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pattern="abc";
    string s="dog cat dog ";
    s+=" ";
    set<char>p;
    for(int i=0;i<pattern.size();i++)
    {
        p.insert(pattern[i]);
    }
    vector<pair<char,string>>vtr;
    vector<string>word;
    string st="";
    int count=0;
    set<string>st1;
    
    for(int i=count;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            st+=s[i];
        }
        else{
            word.push_back(st);
            st="";
            count=i+1;
        }
    }
    for(int i=0;i<word.size();i++)
    {
        st1.insert(word[i]);
    }
    if(pattern.size()==p.size())
    {
        if(st1.size()!=p.size())
        {
            cout<< false;
        }
    }
    if(pattern.size()!=word.size())
    {
        cout<<false;
    }
    for(int i=0;i<pattern.size();i++)
    {
        vtr.push_back({pattern[i],word[i]});

    }
    sort(vtr.begin(),vtr.end());
    for(int i=0;i<vtr.size()-1;i++)
    {
        if((vtr[i].first==vtr[i+1].first) && (vtr[i].second==vtr[i+1].second))
        {
            continue;
        }
        else if((vtr[i].first!=vtr[i+1].first) && (vtr[i].second==vtr[i+1].second))
        {
            cout<<false;
           exit(0);
        }
        else if((vtr[i].first==vtr[i+1].first) && (vtr[i].second)!=vtr[i+1].second)
        {
            cout<<false;
            exit(0);
        }
    }
    cout<< true;

}