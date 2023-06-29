#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>grid={{0,1,1,1},{1,1,1,1},{0,1,1,1}};
    vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size()));
    for(int i=0;i<grid[0].size();i++)
    {
        dp[0][i]=grid[0][i];
    }
    for(int i=0;i<grid.size();i++)
    {
        dp[i][0]=grid[i][0];
    }
    for(int i=1;i<grid.size();i++)
    {
        for(int j=1;j<grid[0].size();j++)
        {
            if(grid[i][j]==1)
            {
                dp[i][j]=(min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]))+1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    int sum=0;
    for(auto it:dp)
    {
        for(auto i:it)
        {
            sum+=i;
        }
        cout<<endl;
    }
    cout<<sum;
}