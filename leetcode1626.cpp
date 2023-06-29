#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int main()
{
    vector<int>ages={2,1,2,1};
    vector<int>scores={4,5,6,5};
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int n=ages.size();
   for(int i=0;i<ages.size();i++)
   {
      pq.push({ages[i],scores[i]});

   }
   
   while(!pq.empty())
   {
      auto it=pq.top();
      int scores=it.second;
      pq.pop();
      arr.push_back(scores);
   }
  vector<vector<int>> dp(n+1 , vector<int>(n + 1, 0));
    for (int index = n - 1; index >= 0; index--)
    {
        for (int prev = index - 1; prev >= -1; prev--)
        {
            int len = dp[index+1][ prev + 1] + 0;
            if (prev == -1 || arr[index] >= arr[prev])
            {
                len = max(len,  arr[index] + dp[ index+1] [index + 1]);
            }
            dp[index][prev+1]=len;
        }
    }
    cout<<dp[0][0];

}