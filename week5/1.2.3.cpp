class Solution {
public:
    int findMin(vector<int>& nums) {
        long long int left=0;
        long long int right = nums.size()-1;
        long long int mid;
        if(nums.size()==1) return nums[0];
        if(nums.front()<nums.back()) return nums.front();
        while(left<=right){
            mid = left + (right-left)/2;
            if(mid+1<nums.size() && nums[mid]>nums[mid+1]){
                break;
            }
            else if(nums[mid]>=nums.front()){
                left = mid+1;
            }
            else if(nums[mid]<nums.back()){
                right = mid-1;
            }
        }
        return nums[mid+1];
    }
};