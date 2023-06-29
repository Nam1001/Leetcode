#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    vector<int> newinterval = {4, 8};
    vector<vector<int>> ans;
    int i=0;int n=intervals.size();
    while(i<n && intervals[i][1]<newinterval[0])
    {
        ans.push_back(intervals[i]);
        i++;
    }
    vector<int>mi=newinterval;
    while(i<n && intervals[i][0]<=newinterval[1])
    {
        mi[0]=min(mi[0],intervals[i][0]);
        mi[1]=max(mi[1],intervals[i][1]);
        i++;
    }
    ans.push_back(mi);
    while(i<n)
    {
        ans.push_back(intervals[i]);
        i++;
    }
    for(auto it: ans)
    {
        for(auto i:it )
        {
            cout<<i;
        }
        cout<<endl;
    }
}