    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int num1 = 0;
        int temp;
        for(auto x : nums){
            num1 = num1 ^ x;
        }
        temp = num1;
        int i=0;
        while(((num1>>i)&1)!=1){
            i++;
        }
        num1 = 0;
        for(auto x : nums){
            if(((x>>i)&1)==1){
                num1 = num1 ^ x;
            }
        }
        vector<int> sol;
        sol.push_back(num1);
        sol.push_back(num1 ^ temp);
        sort(sol.begin(),sol.end());
        return sol;
    }