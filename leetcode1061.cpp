#include <bits/stdc++.h>
using namespace std;

class disjointset
{
    vector<int> rank, parent, size;

public:
    disjointset(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            rank[i]=i;
            parent[i] = i;
        }
    }
    int findUp(int n)
    {
        if (n == parent[n])
            return n;
        return parent[n] = findUp(parent[n]);
    }
    void unionbyrank(int u, int v) // UNION BY RANK
    {
        int ulp_u = findUp(u);
        int ulp_v = findUp(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else
        {
            parent[ulp_v] = ulp_u;
        }
    }
};
int main()
{
    disjointset ds(26);
    string s1="hello";
    string s2="world";
    string basestring="hold";
    for(int i=0;i<s1.size();i++)
    {
         ds.unionbyrank(s1[i]-'a',s2[i]-'a');
    }
    string ans;
    for(int i=0;i<basestring.size();i++)
    {
        char ch=ds.findUp(basestring[i]-'a')+'a';
        ans+=ch;
    }
    cout<<ans;
}