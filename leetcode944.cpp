#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"a", "b"};
    int len = strs[0].size();
    int count=0;

    for (int i = 0; i < len; i++)
    {
        for(int j=0;j<strs.size()-1;j++)
        {
            if(char(strs[j][i])<=char(strs[j+1][i]))
            {
                continue;
            }
            else {
                     count++;
            }
        }
    }
    cout<< count;
}