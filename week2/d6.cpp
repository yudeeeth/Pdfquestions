class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        long int sum=0;
        long int max = nums[0];
        sum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                sum+=nums[i];
            }
            else {
                sum = nums[i];
            }
            if(sum>max){
                max = sum;
            }
            cout<<sum<<" "<<max<<endl;
        }
        return max;
        
    }
};