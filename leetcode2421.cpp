#include <bits/stdc++.h>
using namespace std;

class disjointset
{
    vector<int> rank, parent;

public:
    int count = 0;
    
    disjointset(int n,vector<pair<int,pair<int,int>>>&vec)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            rank[i] = vec[i].first;
        }
    }
    int findUp(int n)
    {
        if (n == parent[n])
            return n;
        return parent[n] = findUp(parent[n]);
    }
    void unionbyrank(int u, int v) // UNION BY RANK
    {
        int ulp_u = findUp(u);
        int ulp_v = findUp(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] == rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            count++;
        }
    }
};
int main()
{
    
    vector<vector<int>>edges={{0,1},{2,1},{3,2},{3,4},{3,5},{5,6},{1,7},{8,4},{9,7}};
    vector<int> vals = {2,5,5,1,5,2,3,5,1,5};
    vector<pair<int,pair<int,int>>>vec(10);
    for(int i=0;i<edges.size();i++)
    {
        vec.push_back({vals[i],{edges[i][0],edges[i][1]}});
    }
    sort(vec.begin(),vec.end());
    disjointset ds(10,vec);
    for(int i=0;i<edges.size();i++)
    {
         ds.unionbyrank(edges[i][0],edges[i][1]);
    }
    cout<<ds.count;

    
}