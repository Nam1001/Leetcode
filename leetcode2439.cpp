#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr={1,3,4,3,4,6,77,8,94,90,444,3,4,5,63,5,6,7,8};
    int prevmaxii=*max_element(arr.begin(),arr.end());
    int idx;
    for(int i=0;i<arr.size();i++){
        if(prevmaxii==arr[i]){
            idx=i;
            break;

        }
    }
    int currmaxiii;
    int count=0;
    while(currmaxiii<=prevmaxii){
       cout<< count++<<" "<<endl;
       if(currmaxiii==prevmaxii) {
        cout<< currmaxiii;
        break;
       }

        if(idx==0) {
           prevmaxii=*max_element(arr.begin(),arr.end());
           break;
        }
        int sum=(arr[idx]+arr[idx-1]);
        int ans=sum/2; 
        cout<<ans<<"ans"<<endl;
        arr[idx-1]=ans;
        arr[idx]=sum-ans;
        
       currmaxiii=*max_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(currmaxiii==arr[i]){
                idx=i;
               cout<<"curramxii "<<idx<<endl;
               break;
            }
        }
        if(currmaxiii<prevmaxii){
            prevmaxii=currmaxiii;
        }
        else{
            break;
        }


    }
    cout<<prevmaxii;
}