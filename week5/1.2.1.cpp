// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int left=1;
        long int right=n;
        long int  mid;
        while(left<=right){
            mid  = left + (right-left)/2;
            if(isBadVersion(mid)){
                if(mid-1>=0 && !isBadVersion(mid-1)){
                    break;
                } 
                else if(mid-1<0) break;
                else {
                    right = mid-1;
                }
            }
            else{
                left = mid+1;
            }
        }
        return mid;
    }
};