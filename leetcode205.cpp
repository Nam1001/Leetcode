class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
  map<char,char>mpp;
    vector<bool>dp(257,0);
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(mpp.find(s[i])==mpp.end() && dp[t[i]]==0)
        {
            mpp[s[i]]=t[i];
            dp[t[i]]=true;
        }
        else 
        {
           if( mpp[s[i]]!=t[i]) return false;
            
        }
    }
    return true;
    
        
    }
};