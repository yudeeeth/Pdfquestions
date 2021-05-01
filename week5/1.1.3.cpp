class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target) return 0;
            else return -1;
        } 
        long long int left=0;
        long long int right = nums.size()-1;
        long long int mid;
        if(nums.front()<nums.back()) return bsearch(nums,0, nums.size()-1,target);
        //cout<<"here";
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
        cout<<mid<<endl;
        if(nums.front()<=target){
            return bsearch(nums,0,mid,target);
        }
        else {
            return bsearch(nums,mid+1,nums.size()-1,target);
        }
        return -1;
    }
    int bsearch(vector<int> &nums, long long int left,long long int right, int target){
        long long int mid;
        //if(left>right) return left;
        //cout<<left<<right;
        while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                left = mid + 1;
            }
            else {
                right = mid-1;
            }
        }
        //cout<<"je";
        return -1;
    }
};