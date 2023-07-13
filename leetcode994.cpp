
#include<bits/stdc++.h>
using namespace std;

    struct node
{ 
    int x;
    int y;
    int time;
    node(int _x,int _y,int _time)
    {
        x=_x;
        y=_y;
        time=_time;
    }

};
    int orangesRotting(vector<vector<int>>& box) {
        queue<node>q;
    int n=box.size();
    int m=box[0].size();
    int orangecount=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(box[i][j]==2)
            {
                q.push(node(i,j,0));
            }
            if(box[i][j]!=0) orangecount++;
        }
    }
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    int count=0;
    int ans=0;
        
        while(!q.empty())
    {
        int time1=q.front().time;
        int x1=q.front().x;
        int y1=q.front().y;
        q.pop();
        count++;
        ans=max(ans,time1);
        for(int indx=0;indx<4;indx++)
        {
            int newx=x1+dx[indx];
            int newy=y1+dy[indx];
            if( newx>=0 && newy>=0 && newx<n && newy<m && box[newx][newy]==1)
            {
                q.push(node(newx,newy,time1+1));
                box[newx][newy]=2;
            }
        }
    }
    if(count==orangecount) return ans;
    return -1;
}


int main(){
   vector<vector<int>>box={{1,2,0},{1,1,0},{0,1,0}};
   cout<< orangesRotting(box); 
   

}