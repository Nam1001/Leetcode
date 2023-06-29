#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> s = {'a','a','a','a','b','b'};
    s.push_back('#');
    vector<char> t;
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                t.push_back(s[i - 1]);
                count = 1;
            }
            
            if (count > 1)
            {
                t.push_back(s[i-1]);
                string c = to_string(count);
                for (int i = 0; i < c.size(); i++)
                {
                    t.push_back(c[i]);
                }
                count = 1;
            }
        }
    }

    for (auto it : t)
    {
        cout << it<<" ";
    }
}