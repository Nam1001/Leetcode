#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> capacity = {91,54,63,99,24,45,78};
    vector<int> rocks = {35,32,45,98,6,1,25};
    int add = 17;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    int count=0;
    for (int i = 0; i < capacity.size(); i++)
    {
        if (capacity[i] != rocks[i])
        {
            q.push({capacity[i] - rocks[i], i});
        }
    }
    while (!q.empty())
    {
        int a = q.top().first;
        int index = q.top().second;
        if (add > 0)
        {
            add = add - a;
            if(add>=0)
            {
              rocks[index] =rocks[index]+ a;
            }
            
        }
        

        q.pop();
    }
    for(int i=0;i<capacity.size();i++)
    {
        if(capacity[i]==rocks[i]) count++;
    }
    cout<<count;
}