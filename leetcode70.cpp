class Solution {
public:
    int solve(int n,vector<int>&dp)
    {
        if(n==0) return 1;
        if(dp[n]!=-1) return dp[n];
        int ans=solve(n-1,dp);
        int ans1=0;
        if(n-2>=0) ans1=solve(n-2,dp);
        return dp[n]= ans+ans1;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       return solve(n,dp);
        
    }
};