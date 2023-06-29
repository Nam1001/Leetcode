#include <bits/stdc++.h>
using namespace std;
vector<int> parent = {-1,0,0,1,1,2,3,3,3,4,5,6,6,6};
string s = "abacbeaefaaaaf";
vector<int> adj[100005];
int maxii = 1;
int dist[100005];

void dfs(int node)
{
    dist[node]=1;
    for (auto it : adj[node])
    {
        dfs(it);
        if(s[it]!=s[node])
        {
            maxii=max(maxii,dist[node]+dist[it]);
            dist[node]=max(dist[node],dist[it]+1);
        }
    }
}
int main()
{

    for (int i = 1; i < parent.size(); i++)
    {
        adj[parent[i]].push_back(i);
    }
    dfs(0);
    cout<<maxii;
}