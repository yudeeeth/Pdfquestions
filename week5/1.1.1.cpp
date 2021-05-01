class Solution {
public:
    int mySqrt(int x) {
        int left = 1;
        //int close=x/2;
        long long int right = INT32_MAX/pow(2,10);
        long long int mid;
        while(left<=right){
            mid = left + (right-left)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x) {
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        if(mid*mid>x) return mid-1;
        return mid;
    }
};