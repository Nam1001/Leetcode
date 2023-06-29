#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>piles={1,4,5,7,8,3,5,6,2,4,55,6,8};
    priority_queue<int>q;
    int k=55;
    for(int i=0;i<piles.size();i++)
    {
        q.push(piles[i]);
    }
    for(int i=0;i<k;i++)
    {
         int a=q.top();
         q.pop();
         a=a-floor(a/2);
         q.push(a);
    }
    int sum=0;
    while(!q.empty())
    {
        sum+=q.top();
        q.pop();
    }
    cout<<sum;

   
}