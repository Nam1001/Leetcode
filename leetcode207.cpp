#include<bits/stdc++.h>
using namespace std;
bool topo(int V,vector<int>adj[])
{
    queue<int>q;
    vector<int>indegree(V,0);
    for(int i=0;i<V;i++)
    {
        for(auto it:adj[i])
        {
            indegree[it]++;
        }
    }
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        count++;
        for(auto it:adj[node])
        {
            indegree[it]--;
            if(indegree[it]==0)
            {
                q.push(it);
            }
        }
    }
    if(count==V)
    {
         return true;  // if cycle does not exits 
    }
    return false;  // if cycle exits
}

int main(){
    vector<vector<int>>arr={{1,4},{2,4},{3,1},{3,2}};
    int numcourse=5;
    vector<int>adj[5];
    for(int i=0;i<arr.size();i++){
        adj[arr[i][1]].push_back(arr[i][0]);
    }
    vector<int>vis(numcourse,0);
    cout<< topo(numcourse,adj);

}