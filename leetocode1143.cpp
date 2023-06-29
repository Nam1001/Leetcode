#include <bits/stdc++.h>
using namespace std;
// int suseq(string s1, string s2, int index, int index1, vector<vector<int>> &dp)
// {
//     if (index >= s1.size() || index1 >= s2.size())
//     {
//         return 0;
//     }
//     if (dp[index][index1] != -1)
//         return dp[index][index1];
//     if (s1[index] == s2[index1])
//     {
//         return dp[index][index1] = 1 + suseq(s1, s2, index + 1, index1 + 1, dp);
//     }
//     else
//     {
//         return dp[index][index1] = max(suseq(s1, s2, index + 1, index1, dp), suseq(s1, s2, index, index1 + 1, dp));
//     }
// }
// int main()
// {
//     string s1 = "ahghutidhyeghujhuhuhu";
//     string s2 = "ahhwecnsueo";
//     vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
//     cout << suseq(s1, s2, 0, 0, dp);
// }

// Tabulation

int main()
{
    string s1 = "aabbca";
    string s2 = "aabchdb";
    vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), 0));
    for(int i=0;i<s1.size();i++)
    {
        dp[i][0]=0;
    }
        for(int j=0;j<s2.size();j++)
    {
        dp[0][j]=0;
    }
    for (int i =1; i <s1.size(); i++)
    {
        for (int j =1; j < s2.size(); j++)
        {
            if (s1[i-1] == s2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][ j- 1]);
            }
        }
    }
    cout << dp[s1.size()-1][s2.size()-1];
}
