class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
        vector<int> sol;
        for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                sol.push_back(i+1);
            }
        }
        return sol;
	}
};