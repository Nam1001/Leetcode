#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>rectangles={{1,1},{2,2},{3,3}};
    vector<vector<int>>points={{3,4},{1,1}};
    queue<pair<int,int>>q;
    vector<int>arr;
    for(int i=0;i<points.size();i++)
    {
        q.push({points[i][0],points[i][1]});
    }
    while(!q.empty())
    {
        int count=0;
        int l=q.front().first;
        int h=q.front().second;
        q.pop();
        for(int i=0;i<rectangles.size();i++)
        {
            if(l<=rectangles[i][0] && h<=rectangles[i][1])
            {
               count++;
            }
        }
        arr.push_back(count);

    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}