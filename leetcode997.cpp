#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>trust={{1,3},{1,4},{2,3},{2,4},{4,3}};
    int n=4;
    vector<int>res(n+1,0);
    for(int i=0;i<trust.size();i++)
    {
        int b=trust[i][1];
        res[b]++;
    }
    int maxi=0;
    for(auto it:res)
    {
        maxi=max(maxi,it);
    }
    if(maxi==n-1)
    {
        cout<<maxi;
        exit(0);
    }
    cout<<-1;

    // cout<<a;
    
}