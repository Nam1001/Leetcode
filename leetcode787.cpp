#include<bits/stdc++.h>
using namespace std;
int k,src,dest;
int main()
{
    vector<vector<int>>flights={{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    src=0;
    dest=3;
    k=1;
    vector<pair<int,int>>adj[flights.size()+1];
       for(auto it:flights)
    {
        adj[it[0]].push_back({it[1],it[2]});
    }
    queue<pair<int,pair<int,int>>>q;
    vector<int>dist(flights.size()+1,1e9);
    dist[src]=0;
    q.push({0,{src,0}});
    while(!q.empty())
    {
        int stop=q.front().first;
        int node=q.front().second.first;
        int wt=q.front().second.second;
        q.pop();
        if(stop>k) continue;
        for(auto it:adj[node])
        {
            int adjnode=it.first;
            int edgeweight=it.second;
            if(wt+edgeweight<dist[adjnode] && stop<=k)
            {
                dist[adjnode]=wt+edgeweight;
                q.push({stop+1,{adjnode,wt+edgeweight}});
            }
        }
    }


    if(dist[dest]==1e9) {
        cout<<-1;
        exit(0);
    }
    
    cout<<dist[dest];

}