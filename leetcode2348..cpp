#include<bits/stdc++.h>
using namespace std;
int subarry(vector<int>&arr,int n)
{   
    float countzero=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            countzero++;
        }
        else if(arr[i]!=0)
        {
            maxi+=ceil(countzero*((countzero+1)/2));
            countzero=0;
        }
    }
    return maxi+=ceil(countzero*((countzero+1)/2));
}
int main()
{
    vector<int>arr={0,11,0,1,0,4,0};
    int n=arr.size();

   cout<< subarry(arr,n);
}