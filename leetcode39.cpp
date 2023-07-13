#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int target, int index,vector<vector<int>>&ans,vector<int>ds){
    if(index<0){
        if(target==0){
           ans.push_back(ds);
        }
        return;
    }
    solve(arr,target,index-1,ans,ds);
    if(target>=arr[index]){
       ds.push_back(arr[index]);
      solve(arr,target-arr[index],index,ans,ds);
      ds.pop_back();
    }
    


}


int main(){
    vector<int>arr={2,3,6,7};
    int n=arr.size()-1;
    int target=7;
    vector<vector<int>>ans;
    vector<int>ds;
    solve(arr,target,n,ans,ds);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
      }
}
