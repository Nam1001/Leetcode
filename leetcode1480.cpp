class Solution {
public:
    void solve(int index,vector<int>&ans,vector<int>&nums,int sum)
    {
        if(index==0)
        {
            sum+=nums[0];
            ans.push_back(sum);
            return;
        }
        sum=sum+nums[index];
        solve(index-1,ans,nums,sum);
        
        
    }
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--)
        {
            solve(i,ans,nums,0);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};