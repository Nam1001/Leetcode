#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> points = {{0,0}, {94911151, 94911150}, {94911152, 94911151}};
     int n = points.size();
        if(n<=2)
            return n;
        
        int maxi = 2;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int count=2;
                for(int k=0; k<n; k++)
                {
                    if(k!=i && k!=j)
                    {
                        if((points[j][1]-points[i][1])*(points[i][0]-points[k][0])==(points[i][1]-points[k][1])*(points[j][0]-points[i][0]))
                            count++;
                    }
                }
                maxi = max(maxi,count);
            }
        }
        cout<< maxi;
    
}