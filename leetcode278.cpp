// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1,e =n; //start from 1 to n
        int mid;
        while(true) //We know for sure that at least one number in range is BadVersion;
       {
          mid = s+(e-s)/2;
          if(!isBadVersion(mid-1) and isBadVersion(mid+1)){ //Checks if pre and next of the mid
          if(isBadVersion(mid))return mid;
          else return mid+1;
}else if(isBadVersion(mid))e=mid-1;
else s=mid+1;
}
}

};