#include <bits/stdc++.h>
using namespace std;
int solve(string s, string k, int i, int j)
{
    if (i < 0 || j<0)
        return 0;
    if (s[i] == k[j])
       return 1+solve(s, k, i - 1, j - 1);
    return max(max(solve(s, k, i - 1, j) , solve(s, k, i, j - 1)) , solve(s, k, i - 1, j - 1));
    
}
int main()
{
    string s = "axc";
    string k = "aghbgdc";
    int i = s.size();
    int j = k.size();
    if( solve(s, k, i - 1, j - 1)==0) 
    {
        cout<<false;
        return 0;
    }
    cout<<true;
}