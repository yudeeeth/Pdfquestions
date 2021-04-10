class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> m;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(m.find(sum)!=m.end()|| sum==0) return true;
            else {
                m.insert(sum);
            }
        }
        return false;
        //Your code here
    }
};