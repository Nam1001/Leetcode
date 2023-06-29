#include <bits/stdc++.h>
using namespace std;
int main()
{
    string start = "hit";
    string end = "cog";
    vector<string> wordlist = {"hot", "dot", "dog", "lot", "log", "cog"};
    set<string> st(wordlist.begin(), wordlist.end());
    queue<vector<string>> q;
    vector<vector<string>>ans;
    q.push({start});
    vector<string> usedonlevels;
    usedonlevels.push_back(start);
    int level;
    while (!q.empty())
    {
        vector<string> vec = q.front();
        q.pop();
        if (vec.size() > level)
        {
            level++;
            for (auto it : usedonlevels)
            {
                st.erase(it);
            }
        }
        string word = vec.back();
        if(word==end)
        {
            if(ans.size()==0)
            {
                ans.push_back(vec);
            }
            else if(ans[0].size()==vec.size())
            {
                ans.push_back(vec);
            }
        }
        for (int i = 0; i < word.size(); i++)
        {
            char original = word[i];
            for (char c = 'a'; c <= 'z'; c++)
            {
                word[i] = c;
                if (st.count(word) != 0)
                {
                    vec.push_back(word);
                    q.push(vec);
                    usedonlevels.push_back(word);
                    vec.pop_back();
                }
            }
            word[i]=original;
        }
    }
    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}