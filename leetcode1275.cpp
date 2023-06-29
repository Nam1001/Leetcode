#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<int>>&grid)
{
    if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2])
    {
        return grid[0][0];
    }
   else if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
    {
        return grid[0][2];
    }
    for(int i=0;i<grid.size();i++)
    {
        if(grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2])
        {
            return grid[i][0];
        }
        else if(grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])
        {
            return grid[0][i];
        }
    }
    return -1;
}
int main()
{
    vector<vector<int>>grid(3,vector<int>(3,2));
    vector<vector<int>>moves={{0,0},{1,1}};
    for(int i=0;i<moves.size();i++)
    {
          if(i%2==0)
          {
             int a=moves[i][0];
             int b=moves[i][1];
             grid[a][b]=1;
          }
          else{
              grid[moves[i][0]][moves[i][1]]=0; 
          }
    }
   int s= check(grid);
   if(s==1)
   {
    cout<<"A";
   }
   else if(s==0)
   {
    cout<<"B";
   }
   
   else if(s==-1 ||s==2)
   {
      for(int i=0;i<grid.size();i++)
      {
        if(grid[i][0] ==2 || grid[i][1]==2 || grid[i][2]==2)
        {
            cout<<"pending";
            exit(0);
        }
      }
      cout<<"draw";
      
   }
}