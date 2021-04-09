
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> sol;
        int min = n-1;
        sol.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=a[min]) {
                min=i;
                sol.push_back(a[i]);
            }
        }
        reverse(sol.begin(),sol.end());
        return sol;
        
    }
};
