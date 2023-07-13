#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr={{9997,9997},{9996,9998}};
    int k=1;
    priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<pair<double, pair<int, int>>>> pq;
    for(int i=0;i<arr.size();i++){
       float x=arr[i][0];
       float y=arr[i][1];
       cout<<x<<" "<<y<<endl;
       double distance=sqrt(pow((x-0),2) + pow((y-0),2));
    //    cout << fixed << setprecision(15) << distance << endl;
       pq.push({distance,{x,y}});

    }
    vector<vector<int>>ans;
    while(k){
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        ans.push_back({x,y});
        pq.pop();
        k--;

    }
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}