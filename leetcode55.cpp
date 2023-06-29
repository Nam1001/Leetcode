#include<bits/stdc++.h>
using namespace std;
   bool canJump(vector<int>& nums) { int i = 0, cnt=0;
    for ( cnt = 0; i < nums.size() && i <= cnt; i++)
        cnt = max(i + nums[i], cnt);
    return i == nums.size();
}
int main()
{
    vector<int>arr={3,2,0,1,4};
    cout<< canJump(arr);
}