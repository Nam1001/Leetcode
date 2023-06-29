#include <bits/stdc++.h>
using namespace std;
bool isConcatenated(string word,unordered_set<string>&st)
    {
        for(int i=0;i<word.size();i++)
        {
            string prefix=word.substr(0,i+1);
            string suffix=word.substr(i+1);
            if((st.find(prefix)!=st.end() && st.find(suffix)!=st.end()) || (st.find(prefix)!=st.end() && isConcatenated(suffix,st)))
            {
                return true;
            }
        }
        return false;
    }
int main()
{
    vector<string> words = {"cat", "cats", "catsdogcats", "dog", "dogcatsdog", "hippopotamuses", "rat", "ratcatdogcat"};
    unordered_set<string> st(words.begin(),words.end());
    int n=words.size();
    vector<string>res;
    for(int i=0;i<n;i++)
    {
        string word=words[i];
        if(isConcatenated(word,st))
        {
            res.push_back(word);
        }

    }
    for(auto it:res)
    {
        cout<<it<<endl;
    }
    
    
}
