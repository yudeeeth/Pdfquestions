class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int nums[], int n, int target) {
        vector<int> sol;
        sol.push_back(-1);
        sol.push_back(-1);
        if(n==1) {
            if(nums[0]==target){
                return 1;
            }
            return 0;
        }
        int left =0;
        int right = n-1;
        int mid = 0;
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
        if(sol[0]==-1) return 0;
        left = 0;
        right = n-1;
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                if(mid+1>n-1) {sol[1]=mid;break;}
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
        return sol[1]-sol[0]+1;
    }
};