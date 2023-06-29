#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={513,633,441,583,771,616,880,713,998,209,197,923};
    int k=10;
    int candidate=5;
    int sum=0;                                                                             
    int maxidx=-1e9;
    int minidx=1e9;
    if(candidate==arr.size()){
        sort(arr.begin(),arr.end());
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        cout<<sum;
        exit(0);
    }
    priority_queue< int, vector<int>, greater<int>> pq1;
    priority_queue< int, vector<int>, greater<int>> pq2;
    for(int i=0;i<candidate;i++){
        if(arr[i]!=-1e9){
            pq1.push(arr[i]);
            arr[i]=-1e9;
            if(i>maxidx) maxidx=i;
        }
    }
    for(int i=arr.size()-1;i>arr.size()-1-candidate;i--){
        if(arr[i]!=-1e9){
            pq2.push(arr[i]);
            arr[i]=-1e9;
            if(i<minidx) minidx=i;
        }
       
    }

    for(auto it:arr){
        cout<<it<<endl;
    }
    // while(!pq1.empty()){
    //     cout<<pq1.top().first<<"pq1"<<endl;
    //     pq1.pop();

    // }
    //  while(!pq2.empty()){
    //     cout<<pq2.top().first<<"pq2"<<endl;
    //     pq2.pop();

    // }
    while(k){
        if((pq1.top()<=pq2.top() || pq2.empty()) && !pq1.empty()){
           int value=pq1.top();
           sum+=value;
           cout<<value<<"pq1"<<endl;
           pq1.pop();
          
           if(arr[maxidx+1]!=-1e9 && maxidx+1<arr.size()-1){
            pq1.push(arr[maxidx+1]);
            arr[maxidx+1]=-1e9;
            maxidx=maxidx+1;

           }
           
        }
        else if((pq1.top()>pq2.top() || pq1.empty()) && !pq2.empty()){
           int value=pq2.top();
           cout<<value<<"pq2"<<endl;
           pq2.pop();
           sum+=value;
           if(arr[minidx-1]!=-1e9 && minidx-1>=0){
            pq2.push(arr[minidx-1]);
            arr[minidx-1]=-1e9;
            minidx=minidx-1;

           }

        }
        k--;
    }

    cout<<sum;
    


}