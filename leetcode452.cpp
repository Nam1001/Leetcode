#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int> &v1,const vector<int> &v2)
    {
        return v1[1] < v2[1];
    }
int main()
{
    vector<vector<int>> points = {{1,2},{3,4},{5,6},{7,8}};
    set<pair<int, int>> st;
    for (int i = 0; i < points.size(); i++)
    {
        st.insert({points[i][0], points[i][1]});
    }
    
    sort(points.begin(), points.end(), sortcol);
    int cnt = 0;
    for (int i = 0; i < points.size(); i++)
    {
        if (st.count({points[i][0], points[i][1]}) == 0)
        {
            continue;
        }
        int range = points[i][1];
        cnt++;
        int j = i + 1;
        points.erase(points.begin()+i);
        while (j < points.size())
        {
            if (range >= points[j][0])
            {

                st.erase({points[j][0], points[j][1]});
               // points.erase(points.begin()+j);
            }
            j++;
        }
        st.erase({points[i][0], points[i][1]});
        points.erase(points.begin()+i);
        int row=points.size();
        points.resize(row,vector<int>(2));
        
    }
    cout << cnt;
    for(auto it:points)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}