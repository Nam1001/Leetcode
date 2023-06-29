#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {73, 74, 75,71, 69, 72, 76, 73};
    stack<int> st;
    vector<int> arr1(arr.size(),0);
    for (int i = arr.size()-1; i >= 0; i--)
    {
        while (!st.empty() && (arr[i] >= arr[st.top()]))
        {
            st.pop();
        }
    
        if(!st.empty())
        {
            
            arr1[i]=(st.top()-i);
           // cout<<st.top()-i<<" ";
        }
        st.push(i);
    }
    //reverse(arr1.begin(), arr1.end());
    cout<<endl;
    for (auto it : arr1)
    {
        cout << it << " ";
    }
}
