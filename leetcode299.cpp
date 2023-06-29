#include<bits/stdc++.h>
using namespace std;
int main()
{
    string secret="011";
    string guess="110";
    int bull=0;
    int cow=0;
     for(int i=0;i<guess.size();i++)
    {
        if(secret[i]==guess[i])
        {
            bull++;
            secret[i]='X';
            
        }
    }
    for(int i=0;i<guess.size();i++)
    {
       if(guess[i]!=secret[i] && secret[i]!='X')
        {
            for(int j=0;j<secret.size();j++)
            {
                if(guess[i]==secret[j])
                {
                    cow++;
                    secret[j]='A';
                    break;
                }
            }
        }
    }
    string x=to_string(bull);
    string y=to_string(cow);
    cout<<x+"A"+y+"B";
 
}