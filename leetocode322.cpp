#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&coins,int amount,int idx,vector<vector<int>>&dp){
    if(idx==0){
        if(amount%coins[idx]==0) return amount/coins[idx];
        else return 1e9;
    }
    else if(dp[idx][amount]!=-1) return dp[idx][amount];

    int notpick=0+solve(coins,amount,idx-1,dp);
    int pick=1e9;
    if(amount>=coins[idx]) pick=1+solve(coins,amount-coins[idx],idx,dp);

    return dp[idx][amount]= min(pick,notpick);

}

int main(){
    vector<int>coins={1,2,5};
    int i=coins.size()-1;
    int amount=11;
    vector<vector<int>>dp(i+1,vector<int>(amount+1,-1));
    int ans=solve(coins,amount,i,dp);
    cout<<ans;
}