#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int maxi = 0;
    // char x;
    string s = "((())";
    // stack<int> st;
    // st.push(-1);


    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == '(')
    //     {
    //         st.push(i);
    //     }
    //     if (s[i] == ')')
    //     {
    //         st.pop();
    //         if(st.empty()) st.push(i);
    //         else
    //         {
    //             count=i-st.top();
    //             maxi=max(maxi,count);
    //         }
    //     }
    // }
    // cout << maxi;

    // approch 2 without using stack;
    int open=0,close=0;
    for(int i=0;i<s.size();i++)
    {
         if(s[i]=='(') open++;
         else close++;

         if(open==close)
         {
            count=2*open;
            maxi=max(maxi,count);
         }
         else if(close>open)
         {
            open=0;
            close=0;
         }
    }
     open=0,close=0;
    for(int i=s.size()-1;i>=0;i--)
    {
         if(s[i]=='(') open++;
         else close++;

         if(open==close)
         {
            count=2*open;
            maxi=max(maxi,count);
         }
         else if(close<open)
         {
            open=0;
            close=0;
         }
    }
    cout<<maxi;
}



