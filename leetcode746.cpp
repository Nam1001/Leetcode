class Solution {
public:
    int solve(int index,vector<int>&cost, vector<int>&dp)
    {
        if(index==cost.size()) return 0;
        if(index==cost.size()-1) return cost[cost.size()-1];
        if(dp[index]!=-1)return dp[index];
        int l1=cost[index]+solve(index+1,cost,dp);
       int l2=cost[index]+solve(index+2,cost,dp);
        return dp[index]= min(l1,l2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
         return min(solve(0,cost,dp),solve(1,cost,dp));
        
    }
};