class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size()-1;
        int left,right,mid;
        left = 0;
        right = n;
        // //basecase size 3 return
        // if(nums.size()==3){
        //     if(nums[1]<nums[0]) return 0;
        //     if(nums[2]>nums[1]) return 2;
        //     return 1;
        // }
        while(left < right){
            mid = left + (right-left)/2;
            if(nums[mid]>nums[mid+1])
                right = mid;
            else
                left = mid +1;
        }
        return left;
    }
};