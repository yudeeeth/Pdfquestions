class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> sol;
        sol.push_back(-1);
        sol.push_back(-1);
        if(nums.size()==1) {
            if(nums[0]==target){
                sol[0]=0;
                sol[1]=0;
            }
            return sol;
        }
        int left =0;
        int right = nums.size()-1;
        int mid = 0;
        cout<<"here";
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                if(mid==0) {sol[0]=0;break;}
                else if(nums[mid-1]!=nums[mid]){
                    sol[0]=mid;
                    break;
                }
                else{
                    right = mid;
                }
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        cout<<"here2";
        if(sol[0]==-1) return sol;
        left = 0;
        right = nums.size()-1;
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                if(mid+1>nums.size()-1) {sol[1]=mid;break;}
                else if(nums[mid+1]!=nums[mid]){
                    sol[1]=mid;
                    break;
                }
                else{
                    left = mid+1;
                }
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        cout<<"here";
        return sol;
    }
};