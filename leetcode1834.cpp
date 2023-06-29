#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> tasks = {{1, 2}, {2, 4}, {3, 2}, {4, 1}};
    using pp = pair<int, pair<int, int>>;
    vector<pp>vtr;
    for(int i=0;i<tasks.size();i++)
    {
        vtr.push_back({tasks[i][0],{tasks[i][1],i}});
    }
    sort(vtr.begin(),vtr.end());
    int curr_time=vtr[0].first;
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    vector<int> arr;
    int i=0;
    while(i<tasks.size() || !pq.empty())
    {
        while(i<tasks.size() && curr_time>=vtr[i].first)
        {
            pq.push({{vtr[i].second.first},{vtr[i].second.second,vtr[i].first}});
            i++;
        }
        curr_time=curr_time+pq.top().first;
        arr.push_back(pq.top().second.first);
        pq.pop();
        
        if(i<tasks.size() && curr_time<vtr[i].first && pq.empty())
        {
            curr_time+=vtr[i].first;
        }

    }

    for(auto it:arr)

    {
        cout<<it;
    }
}