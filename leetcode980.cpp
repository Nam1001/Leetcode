#include <bits/stdc++.h>
using namespace std;
int ans=0;
void solve(vector<vector<int>>&grid,int row,int col,int start,int end,int destst,int destend,int emptycell)
{
    // if(start<0 || start>=row || end<0 || end>=col || grid[start][end]==-1) return;
    if(start==destst && end==destend && emptycell==-1)
    {
        ans++;
        return;
    }
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
    grid[start][end]=-1;
    for(int i=0;i<4;i++)
    {
        int newrow=start+dx[i];
        int newcol=end+dy[i];
        if(newrow<row && newrow>=0 && newcol<col && newcol>=0 && grid[newrow][newcol]!=-1)
        {
            solve(grid,row,col,newrow,newcol,destst,destend,emptycell-1);
        }
    }
    grid[start][end]=0;
    // return;

}
int main()
{
    vector<vector<int>> grid = {{1, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 2}};
    int n = grid.size();
    int m = grid[0].size();
    int start,end,destst,destend;
    int emptycell=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j]==1)
            {
               start=i;
               end=j;
            }
            else if(grid[i][j]==2)
            {
                destst=i;
                destend=j;
            }
            else if (grid[i][j]==0)
            {
                emptycell++;
            }
        }
    }
    solve(grid,n,m,start,end,destst,destend,emptycell);
    cout<<ans;
}