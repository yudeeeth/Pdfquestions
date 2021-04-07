class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> sol;
        vector<int> k(4);
        sort(nums.begin(),nums.end());
        long int temp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                temp = (long)target - (long)nums[i] - (long)nums[j];
                int f,b;
                f=0;
                b=nums.size()-1;
                while(f<b){
                    if(f==i || f==j) f++;
                    else if(b==i||b==j) b--;
                    else if(nums[f]+nums[b]==temp) {
                       k[0] = nums[i];
                       k[1] = nums[j];
                       k[2] = nums[f];
                       k[3] = nums[b];
                       sort(k.begin(),k.end());
                       bool t = true;
                       for(auto &x: sol){
                           if(equ(x,k)) {t=false;break;}
                       }
                       if(t) sol.push_back(k);
                       f++;
                   }
                    else if(nums[f]+nums[b]>temp){
                       b--;
                   }
                    else f++;
                }
            }
        }
        return sol;
    }
    bool equ(vector<int> &a1,vector<int> &a2){
        for(int i=0;i<a1.size();i++){
            if(a1[i]!=a2[i]) return false;
        }
        return true;
    }
};