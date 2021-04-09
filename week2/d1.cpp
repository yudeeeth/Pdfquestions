    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int max,tempmax;
        tempmax = arr[0];
        max = arr[0];
        for(int i=1;i<n;i++){
            tempmax = maxe(arr[i]+tempmax,arr[i]);
            if(tempmax>max) max = tempmax;
        }
        return max;
        // Your code here
    }
    int maxe(int a, int b){
        if(a>b) return a;
        return b;
    }