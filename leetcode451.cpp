#include <bits/stdc++.h>
using namespace std;
string countstr(string s)
{
    map<char, int> mpp;
    string t = "";
    // priority_queue<int> pq;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto it : mpp)
    {
        pq.push({it.second, it.first});
    }
    while(!pq.empty())
    {
        int a=pq.top().first;
        char tt=pq.top().second;
        for(int i=0;i<a;i++)
        {
            t+=tt;
        }
        pq.pop();

    }
    return t;
}
int main()
{
    string s = "loveleetcode";
    cout << countstr(s);
}