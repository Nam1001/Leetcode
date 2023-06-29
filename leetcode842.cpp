#include <bits/stdc++.h>
using namespace std;
bool bfs(vector<vector<int>> &rooms, vector<int> &vis)
{
    queue<int> q;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < rooms[0].size(); j++)
        {
            q.push(rooms[i][j]);
        }
    }
    vis[0] = 1;
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        if (!vis[a])
        {

            for (int j = 0; j < rooms[a].size(); j++)
            {
                q.push(rooms[a][j]);
            }
            vis[a] = 1;
        }
        else
        {
            continue;
        }
    }
    for (auto it : vis)
    {
        if (it == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> rooms = {{1,2},{},{},{}};
    vector<int> vis(rooms.size(), 0);
    cout << bfs(rooms, vis);
}