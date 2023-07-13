#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>flood_fill(vector<vector<int>>arr,int x,int y,int color,vector<vector<int>>vis){
   queue<pair<int,int>>q;
   q.push({x,y});
   vis[x][y]=1;
   vector<vector<int>>flood=arr;
   flood[x][y]=color;
   int dx[4]={1,-1,0,0};
   int dy[4]={0,0,1,-1};
   while(!q.empty()){
     int x=q.front().first;
     int y=q.front().second;
     q.pop();
     for(int i=0;i<4;i++){
       int newx=dx[i]+x;
       int newy=dy[i]+y;
      
       if(newx<arr.size() && newy<arr[0].size() && !vis[newx][newy] && arr[x][y]==arr[newx][newy]){
        //  cout<<newx<<" "<<newy<<endl;
          flood[newx][newy]=color;
          vis[newx][newy]=1;
          q.push({newx,newy});
       }
     }
   }


return flood;



}

int main(){
    vector<vector<int>>arr={{0,0,0},{0,0,0}};
    int n=arr.size();
    int m=arr[0].size();
    int sr=0;
    int sc=0;
    int color=0;
    vector<vector<int>>vis(n,vector<int>(m,0));
   vector<vector<int>>ans= flood_fill(arr,sr,sc,color,vis);
   for(auto it:ans){
    for(auto i:it){
        cout<<i<<" ";
    }
    cout<<endl;
   }
}