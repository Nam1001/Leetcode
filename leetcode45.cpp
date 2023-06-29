#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
     
      int currmax=0;
      int jumps=0;
      int currreach=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]+i>currmax)
            {
                currmax=nums[i]+i;
            }
            if(i==currreach)
            {
                jumps++;
                currreach=currmax;
            }
        }
        return jumps;
    }
};