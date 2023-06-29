#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
vector<bool> fruits;
pair<int, int> dfs(int node, int par)
{
    pair<int, int> v = {0, fruits[node]};
    for (auto it : adj[node])
    {
        if (it != par)
        {
            auto x = dfs(it, node);
            v.first += (2 + x.first) * x.second;
            v.second |= x.second;
        }
    }
    return v;
}

int main()
{
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}, {2, 6}};
    vector<bool> hasapple = {false, false, true, false, true, true, false};
    fruits=hasapple;
    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    cout << dfs(0, 0).first;
}