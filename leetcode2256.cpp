#include<bits/stdc++.h>
using namespace std;
int minsum(vector<long long int>&arr,int n,int i,int sum)
{
    int mini=1e9;
    int miniind=1e9;
    int prevsum=0;
    int a;
    if(n==1)
    {
        if(arr[0]==0)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        
        for(int i=0;i<n;i++)
        {
           prevsum+=arr[i];
           sum=sum-arr[i];
           if(n-(i+1)==0)
           {
             a=abs(floor(prevsum/(i+1)));
           }
           else{
             a=abs(floor(prevsum/(i+1))-floor(sum/(n-i-1)));
           }
        //    cout<<a<<endl;
           if(a<mini)
           {
            mini=a;
            miniind=i;
           }
        }
    }
    return miniind;
}
int main()
{
    vector<long long int>arr={24566638,9093339,8999847,89585777,84637777777,827384859687,999304985899475,98888576869949854};
    int n=arr.size();
    unsigned long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
  cout<< minsum(arr,n,0,sum);
}