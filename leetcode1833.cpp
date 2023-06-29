#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>costs={1,6,3,1,2,5};
    int coins=20;
    sort(costs.begin(),costs.end());
    int cnt=0;
    for(int i=0;i<costs.size();i++)
    {
        if(coins>=costs[i])
        {
            cnt++;
            coins-=costs[i];
        }
    }
    cout<<cnt;
}