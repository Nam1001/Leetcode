#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>gas={1,2,3,4,5};
    vector<int>cost={3,4,5,1,2};
    if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0))
    {
        cout<<-1;
        exit(0);
    }
    int total=0;
    int res=0;
    for(int i=0;i<gas.size();i++)
    {
        total+=gas[i]-cost[i];
        if(total<0)
        {
            total=0;
            res=i+1;
        }
    }
    cout<<res;
}