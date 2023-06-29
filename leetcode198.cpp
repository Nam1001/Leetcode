class Solution {
public:
    int solve(vector<int>&nums,int index,vector<int>&dp)
    {   if(index<0) return 0;
        if(dp[index]!=-1) return dp[index];
        int notpick=0+solve(nums,index-1,dp);
        int pick=-1e9;
        pick=nums[index]+solve(nums,index-2,dp);
        return dp[index]= max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        return solve(nums,n,dp);
        
    }
};