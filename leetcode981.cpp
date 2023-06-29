#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     vector<int>nums={-3,-2,-3};
//     int currsum=0;
//     int maxisum=-1e9;
//     for(int i=0;i<nums.size();i++)
//     {
//         currsum=0;
//         for(int j=i;j<i+nums.size();j++)
//         {
//             currsum+=nums[(j)%nums.size()];
//             if(maxisum<currsum)
//             {
//                 maxisum=currsum;
//             }
//         }
//     }
//     cout<<maxisum;
// }
//



int main()
{
    vector<int>nums={};
    int currsum=0;
    int maxisum=-1e9;
    for(int i=0;i<nums.size();i++)
    {
        currsum+=nums[(i-1+nums.size())%nums.size()];
        if(maxisum<currsum)
        {
            maxisum=currsum;
        }
        if(currsum<0)
        {
            currsum=0;
        }
    }
    cout<<maxisum;
}

