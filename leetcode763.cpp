#include<bits/stdc++.h>
using namespace std;
void countpart(string s,int index)
{
    vector<int>arr;
    map<char,int>mpp;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]]=i;
    }
    int maxi=0;
    int prev=-1;
    for(int i=0;i<s.size();i++)
    {
        if(mpp[s[i]]>maxi)
        {
            maxi=mpp[s[i]];
        }
        if(maxi==i)
        {
            arr.push_back(maxi-prev);
            prev=maxi;
        }

    }
    for(auto it:arr)
    {
        cout<<it<<endl;
    }
}
int main()
{
    string s="eccbbbdecb";
    countpart(s,0);
}
