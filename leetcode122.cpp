#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int profit=0;
    int solve(vector<int>& arr,int buy,int index,int n,vector<vector<int>>&dp)
    {
        if(index==n) return 0;
        if(dp[index][buy]!=-1) return dp[index][buy];
        if(buy==1)
        {
            int buystock=-arr[index]+solve(arr,0,index+1,n,dp);
            int notbuystock=0+solve(arr,1,index+1,n,dp);
            profit=max(buystock,notbuystock);
        }
        else
        {
            int sold=arr[index]+solve(arr,1,index+1,n,dp);
            int notsold=0+solve(arr,0,index+1,n,dp);
            profit=max(notsold,sold);
        }
        return dp[index][buy]=profit;
    }
    
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int buy=1;
    vector<vector<int>>dp(n,vector<int>(2,-1));
    return solve(arr,1,0,n,dp);

        
    }
};