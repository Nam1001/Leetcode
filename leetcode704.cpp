class Solution {
public:
    int search(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        int mid=(i+j)/2;
        while(i<=j)
        {
            if(arr[j]==target) return j;
            if(arr[i]==target) return i;
            if(arr[mid]<target)
            {
                  i=mid;
                  mid=(i+j)/2;   
            }
            if(arr[mid]>target)
            {
                j=mid;
                mid=(i+j)/2;
                
            }
            if(arr[mid]==target)
            {
                return mid;
            }
            if(i==mid || j==mid)
            {
                return -1;
            }
        }
        
        return -1;
    }
};