class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>arr1;
        int i=0;
        int j=arr.size()-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==target)
            {
                arr1.push_back(1+i);
                arr1.push_back(1+j);
                return arr1;
            }
            else if(arr[i]+arr[j]>target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        return arr;
        
    }
};