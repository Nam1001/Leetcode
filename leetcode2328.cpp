#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>arr,int i,int j,int m,int n){
    if(i==m || j==n) return arr[m-1][n-1];

    if(i+1<arr.size() && arr[i+1][j]>arr[i][j]) return arr[i][j]+solve(arr,i+1,j,m,n);
    else if(j+1<arr[0].size() && arr[i][j+1]>arr[i][j]) return arr[i][j]+solve(arr,i,j+1,m,n);
    else if (i-1>=0 && arr[i-1][j]>arr[i][j]) return arr[i][j]+solve(arr,i-1,j,m,n);
    else if(j-1>=0 && arr[i][j-1]>arr[i][j]) return arr[i][j]+solve(arr,i,j-1,m,n);
    
}
int main(){
    vector<vector<int>> arr={{1,1},{3,4}};
    int m=arr.size();
    int n=arr[0].size();
   cout<< solve(arr,0,0,m,n);

}