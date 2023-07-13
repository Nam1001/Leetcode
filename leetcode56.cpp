#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr={{1,3},{2,6},{11,20},{8,10}};
    sort(arr.begin(),arr.end());
    int minLoweridex=arr[0][0];
    int maxUpperidex=arr[0][1];
    for(int i=1;i<arr.size();i++){
        int lowerIndex=arr[i][0];
        int upperIndex=arr[i][1];
        if(lowerIndex<=maxUpperidex){
            maxUpperidex=upperIndex;
        }
        else{
           minLoweridex=lowerIndex;
           maxUpperidex=upperIndex;

        }
}
  for(auto it:arr){
    for(auto i:it){
        cout<<i<<" ";
    }
    cout<<endl;
  }
}