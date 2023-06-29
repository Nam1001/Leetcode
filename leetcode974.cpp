#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4, 5, 0, -2, -3, 1};
    int k = 5;
    unordered_map<int, int> mpp;
    int sum = 0;
    int count = 0;
    mpp[0] = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        int remainder = sum % k;
        if (remainder < 0)
        {
            remainder+=k;
        }
        if (mpp.find(remainder) == mpp.end())
        {
            mpp[remainder]++;
        }
        else if(mpp.find(remainder)!=mpp.end())
        {
            count+=mpp[remainder];
            mpp[remainder]++;
        }
    }
    cout<<count;
}