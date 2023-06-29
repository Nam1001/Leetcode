#include <bits/stdc++.h>
using namespace std;

bool validPath(int l, vector<vector<int>> &edges, int source, int destination)
{
    vector<int> adj[l];
    int n = edges.size();
    // int m = edges[0].size();
    for (int i = 0; i < n; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int> vis(l, 0);
    vis[source] = 1;
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for (auto it : adj[a])
        {
            if (it == destination)
            {
                return true;
            }
            if(!vis[it])
            {
              vis[it]=1;
              q.push(it);
            }
            
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> ed = {{0, 4}};
    int source = 0;
    int dest = 4;
    cout << validPath(5, ed, source, dest);
}