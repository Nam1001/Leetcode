#include<bits/stdc++.h>
using namespace std;
int inv[40001];
long long power(long long int a,long long int n)
{
    long long int result=1;
    while(n)
    {
        if(n&1)result=(result*a)%1000000007;
        n>>=1;
        a=(a*a)%1000000007;
    }
    return result;
}
bool Str(int l,int r,vector<int>&dp)
{
    int result=dp[r];
    if(l>0) result-=dp[l-1];
    result=(result*inv[l])%1000000007;
    return result;


}
void hash1(string s,vector<int>&dp)
{
    int value=0;
    int p=31;
    int p_power=1;
    inv[0]=1;
    dp[0]=s[0]*1;
    for(int j=1;j<s.size();j++)
    {
        p_power=(p_power*p)%1000000007;
       inv[j]=power(p_power,1000000007-2);
       dp[j]=(dp[j-1]+(s[j]-'a'+1)*(p_power))%1000000007;
       

    }
}

int maxiop(string s,int ind,vector<int>&dp)
{
    if(ind==s.size()) return 0;
    int ans=1;
    for(int j=1;j<s.size();j++)
    {
        int l1=ind;
        int r1=l1+j-1;
        int l2=r1+1;
        int r2=l2+j-1;
        if(r1>=s.size() || r2>=s.size()) break;
        if(Str(l1,r1,dp)==Str(l2,r2,dp))
        {
            cout<<"true"<<endl;
            ans=max(ans,1+maxiop(s,r1+1,dp));
        }
        
    }
    return ans;
}
int main()
{
    string s="abcabcdabc";
    vector<int>dp(s.size(),0);
    hash1(s,dp);
    cout<< maxiop(s,0,dp);
}