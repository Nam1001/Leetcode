#include<bits/stdc++.h>
using namespace std;
bool checkbipartite(int node,vector<int>&color,vector<int>adj[])
{
   queue<int>q;
   color[node]=0;
   q.push(node);
   while(!q.empty())
   {
       int src=q.front();
       q.pop();
       for(auto it:adj[src])
       {
           if(color[it]==-1)
           {
           color[it]=1-color[src];
           q.push(it);
           }
           else if(color[it]==color[src])
           {
               return false;
           }
       }
   }
   return true;
}
bool isbipartite(int v,vector<int>adj[])
{
    vector<int>color(v+1,-1);
    for(int i=1;i<=v;i++)
    {
        if(color[i]==-1)
        {
            if(!checkbipartite(i,color,adj))
            {
                return true;
            }
        }
    }
    return false;

}
int main()
{
    vector<vector<int>>dislikes={{1,2},{2,3},{3,4},{2,4}};
    int n=dislikes.size();
    vector<int>adj[n+1];
    for(int i=0;i<dislikes.size();i++)
    {
        adj[dislikes[i][0]].push_back(dislikes[i][1]);
        adj[dislikes[i][1]].push_back(dislikes[i][0]);
    }
    
    bool a=isbipartite(n,adj);
    if(a)
    {
        cout<<"not bipartite";

    }
    else{
        cout<<"bipartite";
    }
    return 0;
}
