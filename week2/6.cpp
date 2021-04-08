class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> sol;
        vector<int> left(N,-1),right(N,-1);
        int min=0;
        for(int i=0;i<N;i++){
            if(arr[min]>=arr[i]) min=i;
            else left[i] = min;
        }
        int max=N-1;
        for(int i=N-1;i>=0;i--){
            if(arr[max]<=arr[i]) max = i;
            else right[i] = max;
        }
        for(int i=0;i<N;i++){
            if(left[i]!=-1 && right[i]!=-1){
                sol.push_back(arr[left[i]]);
                sol.push_back(arr[i]);
                sol.push_back(arr[right[i]]);
                break;
            }
        }
        return sol;
    }
};