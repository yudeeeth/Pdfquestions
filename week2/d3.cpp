    vector<int> subarraySum(int arr[], int n, int s){
        vector<int> left(n,0),right(n,0);
        vector<int> sol;
        left[0]= arr[0];
        right[n-1] = arr[n-1];
        for(int i=1;i<n;i++){
            left[i] = left[i-1]+arr[i];
        }
        int i,j;
        i=0;
        j=n-1;
        int currsum;
        currsum = left[j];
        for(;i<n;i++){
            for(j=i;j<n;j++){
                if(i==0) currsum = left[j];
                else currsum = left[j]-left[i-1];
                if (currsum==s) {
                    sol.push_back(i+1);
                    sol.push_back(j+1);
                    return sol;
                }
                else if(currsum>s) break;
                
            }
        }
        sol.push_back(-1);
        return sol;
        // Your code here
        
    }