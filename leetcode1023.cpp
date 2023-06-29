#include <bits/stdc++.h>
using namespace std;
int solve(string &arr, string &pattern, int i, int j,vector<vector<int>>dp)
{

    if (j < 0 && i > 0)
        return -1e9;
    if (i < 0 || j < 0)
        return 0;
    if(dp[i][j]!=-1) return dp[i][j];    
    if (arr[i] == pattern[j])
    {
        return dp[i][j]=1 + solve(arr, pattern, i - 1, j - 1,dp);
    }
    if (arr[i] != pattern[j])
    {
        if (isupper(arr[i]) == true)
            return dp[i][j]=-1e9;
        return dp[i][j]=max(solve(arr, pattern, i - 1, j,dp), solve(arr, pattern, i, j - 1,dp));
    }
    return 0;
}
int main()
{
    vector<string> arr = {"FooBar", "FooBarTest", "FootBall", "FrameBuffer", "ForceFeedBack"};
    string pattern = "FoBa";
    vector<bool>x;
    for (int i = 0; i < arr.size(); i++)
    {
        vector<vector<int>>dp(arr[i].size(),vector<int>(pattern.size(),-1));
        int a = solve(arr[i], pattern, arr[i].size() - 1, pattern.size() - 1,dp);
        if (a != pattern.size())
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
        // cout<<a<<endl;
    }
    // for(int i=0;i<x.size();i++)
    // {
    //     cout<<x[i]<<" ";
    // }
}

// 4
// 5
// 4
// 2
// 4