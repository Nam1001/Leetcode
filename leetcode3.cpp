#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "pwwkew";
    set<char> st;
    int maxii = 0;
    
    // Iterate over the string
    for(int i = 0; i < str.size(); i++) {
        int count = 0;
        st.insert(str[i]);
        count++;
        // Iterate from i+1 to the end of the string
        for(int j = i + 1; j < str.size(); j++) {
            if(st.count(str[j]) == 0) {
                st.insert(str[j]);
                count++;
            } else {
                maxii = max(maxii, count);
                break;
            }
        }
        st.clear();
    }
    cout<<maxii;
}
