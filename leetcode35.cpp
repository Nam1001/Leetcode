
    int main() {
        vector<int>nums={2,3,4,5,6,7,8,9};
     
        int low = 0, high = nums.size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] > target) high = mid-1;
            
            else low = mid+1;
        }
        return low;
        
    }
    int
