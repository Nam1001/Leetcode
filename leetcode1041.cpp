#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="GLGLGGLGL";
    char currdir='N';
    int idx=0;
    int idy=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='G' && currdir=='N')
        {
            idy=idy+1;
        }
        else if(s[i]=='G' && currdir=='W')
        {
             idx=idx-1;
        }
        else if(s[i]=='G' && currdir=='E')
        {
              idx=idx+1;
        }
        else if(s[i]=='G' && currdir=='S')
        {
              idy=idy-1;
        }
        else if(s[i]=='L' && currdir=='N')
        {
             currdir='W';
        }
        else if(s[i]=='L' && currdir=='W')
        {
             currdir='S';
        }
        else if(s[i]=='L' && currdir=='S')
        {
             currdir='E';
        }
        else if(s[i]=='L' && currdir=='E')
        {
             currdir='N';
        }
        else if(s[i]=='R' && currdir=='N')
        {
             currdir='E';
        }
        else if(s[i]=='R' && currdir=='W')
        {
             currdir='N';
        }
        else if(s[i]=='R' && currdir=='S')
        {
             currdir='W';
        }
        else if(s[i]=='R' && currdir=='E')
        {
             currdir='S';
        }
    }
    if(idx==0 && idy==0)
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
}