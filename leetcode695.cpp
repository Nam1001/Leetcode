#include <bits/stdc++.h>
using namespace std;
int bfs(vector<vector<int>> &grid, vector<vector<int>> &vis, int i, int j, int row, int col)
{
    queue<pair<int, int>> q;
    int count = 0;
    q.push({i, j});
    vis[i][j] = 1;
    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        count++;
        q.pop();
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for (int i = 0; i < 4; i++)
        {
            int delrow = dx[i];
            int delcol = dy[i];

            if (a + delrow >= 0 && a + delrow < row && b + delcol >= 0 && b + delcol < col)
            {
                if (grid[a + delrow][b + delcol] == 1 && !vis[a + delrow][b + delcol])
                {
                    vis[a + delrow][b + delcol] = 1;
                    q.push({a + delrow, b + delcol});
                }
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<int>> grid = {{1,1,0,0,0},{1,1,0,0,0},{0,0,0,1,1},{0,0,0,1,1}};

    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int maxii=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                maxii=max(maxii, bfs(grid, vis, i, j, n, m));
            }
        }
    }
    cout<<maxii;
}