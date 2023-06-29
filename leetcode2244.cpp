#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={66,66,63,61,63,63,64,66,66,65,66,65,61,67,68,66,62,67,61,64,66,60,69,66,65,68,63,60,67,62,68,60,66,64,60,60,60,62,66,64,63,65,60,69,63,68,68,69,68,61};
    map<int,int>mpp;
    for(int i=0;i<nums.size();i++)
    {
        mpp[nums[i]]++;
    }
    int count=0;
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    for(auto &it:mpp)
    {
        if(it.second==1)
        {
            cout<<-1;
            exit(0);
        }
        else if(it.second%3==0)
        {
            count+=it.second/3;
        }
        else{
            count+=it.second/3+1;
        }
    }
     cout<<count;
}