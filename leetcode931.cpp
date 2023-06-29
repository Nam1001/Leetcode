#include<bits/stdc++.h>
using namespace std;

int minisum(vector<vector<int>>&arry,int row,int col,int i,int j,vector<vector<int>>&dp)
{
    
    if(i==row-1)
    { 
        return arry[i][j];

    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(i+1>=row || i+1<0 || j<0 || j+1>=col)
    {
        return 1e9 ;
    }
      int left  = arry[i][j]+minisum(arry,row,col,i+1,j-1,dp); 
      int down = arry[i][j]+minisum(arry,row,col,i+1,j,dp);
      int rightdia =arry[i][j]+minisum(arry,row,col,i+1,j+1,dp);
    

    return dp[i][j]=min(min(left,down),rightdia);

    
}
int main()
{
    vector<vector<int>> arry ={{100,-42,-46,-41},{31,97,10,-10},
                               {-58,-51,82,89},{51,81,69,-51}};
    int r=arry.size();
    int c=arry[0].size();
    vector<vector<int>>dp(r,vector<int>(c,-1));
    int mini=1e9;
    for(int i=arry.size()-1;i>=0;i--)
    {
        if(i==arry.size()-1)
        {
            for(int j=0;j<c;j++)
            {
                dp[i][j]=arry[i][j];
            }
        }
        if(i>0 && j>0)
    }
}