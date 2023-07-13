#include<bits/stdc++.h>
using namespace std;
void countIsland(vector<vector<char>>island,vector<vector<int>>&vis,int i,int j){
    queue<pair<int,int>>q;
    vis[i][j]=1;
    q.push({i,j});
    while(!q.empty()){
      int x=q.front().first;
      int y=q.front().second;
      q.pop();
      int dx[4]={0,0,1,-1};
      int dy[4]={1,-1,0,0};
      for(int i=0;i<4;i++){
        int newdx=x+dx[i];
        int newy=y+dy[i];
        if(newdx<island.size() && newy<island[0].size() && vis[newdx][newy]==0 && island[newdx][newy]=='1'){
            vis[newdx][newy]=1;
            q.push({newdx,newy});
            
        }
      }
    }
    return;
}
int main(){
  vector<vector<char>> island = {{'0'}};

    vector<vector<int>>vis(island.size(),vector<int>(island[0].size(),0));
    int count=0;
    for(int i=0;i<island.size();i++){
        for(int j=0;j<island[0].size();j++){
            if(vis[i][j]==0 && island[i][j]=='1'){
                countIsland(island,vis,i,j);
                count++;
            }
        }
    }
    cout<<count;



}