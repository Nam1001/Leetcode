#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&graph,int src,int target,vector<vector<int>>&res,vector<int>&arr)
{
    arr.push_back(src);
    if(src==target)
    {
        res.push_back(arr);
    }

    for(int it:graph[src])
    {
        bfs(graph,it,target,res,arr);
    }
    arr.pop_back();


       
}
int main()
{
    vector<vector<int>>graph={{4,3,1},{3,2,4},{3},{4},{}};
    int target=graph.size()-1;
    vector<vector<int>>res;
    vector<int>arr;
    bfs(graph,0,target,res,arr);
    for(auto it:res)
    {
        for(auto i:it)
        {
            cout<<i;
        }
        cout<<endl;
    }
    

}