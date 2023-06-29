#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, 3, 0, 5, 7, 8, 2, 2, 2, 2, 0};
    map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    map<int, int>::iterator it;
    int maxii = 0;
    int count = 0;
    for (it = mpp.begin(); it != mpp.end(); it++)
    {
        if ((it->first - next(it)->first) == -1)
        {
            count = it->second + next(it)->second;
            if (count > maxii)
            {
                maxii = count;
            }
        }
    }
    cout << maxii;
}