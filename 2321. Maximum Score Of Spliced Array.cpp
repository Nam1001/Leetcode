#include<bits/stdc++.h>
using namespace std;
int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int sum1=accumulate(nums1.begin(),nums1.end(),0);
        int sum2=accumulate(nums2.begin(),nums2.end(),0);
        int n=nums1.size();
        int first=0,second=0, maxi1=0,maxi2=0;
        for(int i=0;i<n;i++){
            first+=nums1[i]-nums2[i];
            second+=nums2[i]-nums1[i];
            maxi1=max(maxi1,first);
            maxi2=max(maxi2,second);
            if(first<0) first=0;
            if(second<0) second=0;
        }
        return max(sum1+maxi2,sum2+maxi1);

}

int main(){
    vector<int>a={60,60,60};
    vector<int>b={10,90,10};
    cout<<maximumsSplicedArray(a,b);
}