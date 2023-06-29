#include<bits/stdc++.h>
using namespace std;
int main()
{
    string start="hit";
    string end="cog";
    vector<string>wordlist={"hot","dot","dog","lot","log","cog"};
    set<string>st(wordlist.begin(),wordlist.end());
    queue<pair<string,int>>q;
    q.push({start,1});
    st.erase(start);
    while(!q.empty())
    {
        string word=q.front().first;
        int steps=q.front().second;
        q.pop();
        if(word==end) {
            return steps;
            exit(0);
        }
        for(int i=0;i<word.size();i++)
        {
            char original=word[i];
            for(char z='a';z<='z';z++)
            {
                word[i]=z;
                if(st.find(word)!=st.end())
                {
                    st.erase(word);
                    q.push({word,steps+1});
                }
            }
        word[i]=original;
        }
    }
    return 0;
}