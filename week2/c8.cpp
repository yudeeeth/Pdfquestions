class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i,j;
        i=0;j=0;
        int num=0;
        long long int prod=1;
        while(j<nums.size()){
            prod *= nums[j];
                while(prod>=k&&i<=j){
                    prod/=nums[i];
                    i++;
                }
            num+=j-i+1;
            j++;
        }
        return num;
    }
};