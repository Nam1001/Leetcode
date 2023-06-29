#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,1,2,2};
    int n=2;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
          res.push_back(arr[i]);
          res.push_back(arr[i+n]);
    }
    for(auto it:res)
    {
        cout<<it;
    }
}