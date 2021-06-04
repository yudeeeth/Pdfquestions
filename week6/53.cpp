    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> sol;
        int i =0;
        int j=nums.size()-1;
        int mid = i+(j-i)/2;
        sol.push_back(nums[mid]);
        uti(sol,nums,i,mid-1);
        uti(sol,nums,mid+1,j);
        return sol;
    }
    
    void uti(vector<int>&sol, vector<int> &nums, int i, int j){
        if(j<i) return;
        if(i==j) sol.push_back(nums[i]);
        else{
            int mid = i+(j-i)/2;
            sol.push_back(nums[mid]);
            uti(sol,nums,i,mid-1);
            uti(sol,nums,mid+1,j);
        }
    }