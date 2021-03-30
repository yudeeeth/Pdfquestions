class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        i=0;j=-1;
        for(;i<nums.size();i++){
            if(nums[i]==0) {;}
            else{
                j++;
                nums[j]=nums[i];
            }
        }
        j++;
        for(;j<nums.size();j++){
            nums[j]=0;
        }
    }
};