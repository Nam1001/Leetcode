#include<bits/stdc++.h>
using namespace std;
int maxirob(vector<int>&arr,int n,int index,vector<int>&dp)
{
    if(index<0)
    {
        return 0;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int notpick=0+maxirob(arr,n,index-1,dp);
    int pick=-1e9;
    pick=arr[index]+maxirob(arr,n,index-2,dp);
    
    return dp[index]= max(pick,notpick);
}
int main()
{
    vector<int>arr={1,2};
    int n=arr.size();
    vector<int>dp(n,-1);
  cout<< maxirob(arr,n,n-1,dp);
}