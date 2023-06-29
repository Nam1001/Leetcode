#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int maxpro=INT_MIN;
        int maxpro1=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            product=product*nums[i];
            if(product>maxpro)
            {
                maxpro=product;
            }
            if(product==0)
            {
                product=1;
            }
        }
         product=1;
        for(int j=nums.size()-1;j>=0;j--)
        {
            product=product*nums[j];
            if(product>maxpro1)
            {
                maxpro1=product;
            }
            if(product==0)
            {
                product=1;
            }
        }
        return max(maxpro,maxpro1);
        
    }
};