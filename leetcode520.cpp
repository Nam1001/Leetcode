#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word = "ffffffffffffffffffF";
    int cap = 0, small = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (char(word[i]) >= 97 && char(word[i]) <= 122)
        {
            small++;
        }
        else if (char(word[i]) >= 65 && char(word[i]) <= 90)
        {
            cap++;
        }
    }
    if (cap > 0 && small > 0)
    {
        if (cap == 1)
        {
            if (isupper(word[0]))
            {
                cout<<true;
                exit(0);
            }
            else{
                cout<<false;
                exit(0);
            }
        }
        else{
            cout<<false;
            exit(0);
        }
    }
    cout << true;
}