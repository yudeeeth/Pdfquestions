class Solution{
    public:
    int search(int nums[], int l, int h, int target){
    // //complete the function here
    // }
    
    // int search(int nums[], int target) {
        int n = h-l+1;
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1;
        } 
        long long int left=0;
        long long int right = n-1;
        long long int mid;
        if(nums[0]<nums[n-1]) return bsearch(nums,0, n-1,target);
        //cout<<"here";
        while(left<=right){
            mid = left + (right-left)/2;
            if(mid+1<n&& nums[mid]>nums[mid+1]){
                break;
            }
            else if(nums[mid]>=nums[0]){
                left = mid+1;
            }
            else if(nums[mid]<nums[n-1]){
                right = mid-1;
            }
        }
        //cout<<mid<<endl;
        if(nums[0]<=target){
            return bsearch(nums,0,mid,target);
        }
        else {
            return bsearch(nums,mid+1,n-1,target);
        }
        return -1;
    }
    int bsearch(int nums[], long long int left,long long int right, int target){
        long long int mid;
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
