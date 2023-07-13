#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr={{1,10},{2,6},{9,20},{5,1}};
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(ans.size()==0){
            ans.push_back(arr[i]);
        }
        else if(arr[i][0]<=ans.back()[1]){
            ans.back()[1]=max(arr[i][1],ans.back()[1]);

        }
        else{
            ans.push_back(arr[i]);
        }
    }
  for(auto it:ans){
    for(auto i:it){
        cout<<i<<" ";
    }
    cout<<endl;
  }

}