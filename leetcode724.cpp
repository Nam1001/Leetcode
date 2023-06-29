class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        
    int rsum=0;
    int lsum=0;
    for(int i=0;i<arr.size();i++)
    {
        rsum=accumulate(arr.begin()+i+1,arr.end(),0);
        if(lsum==rsum)
        {
            return i;
        }
        else{
            lsum=lsum+arr[i];
            rsum=0;
        }
    }
        return -1;
    }
};