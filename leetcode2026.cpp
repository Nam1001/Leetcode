#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "H..H.H.HH.H";

    int totalBucket = 0;
    int n = s.length();
    for (int i = 0; i < n;)
    {
        if (s[i] == 'H')
        {
            if (i + 1 < n && s[i + 1] == '.')
            {
                totalBucket++;
                i += 3;
            }
            else if (i - 1 >= 0 && s[i - 1] == '.')
            {
                totalBucket++;
                i += 1;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            i++;
        }
    }
    return totalBucket;
}
