    //map to keep track of cumulative sum, and when it matches previous sum find is range greater than max.
    
    int maxLen(int arr[], int N)
    {
        int n=0;
        int max = 0;
        unordered_map<int,int> m;
        for(int i=0;i<N;i++){
            if(arr[i]==0){
                n--;
            }
            else {
                n++;
            }
            if(n==0){
                max = i+1;
            }
            if(m.find(n)==m.end()){
                m[n] = i;
            }
            else {
                if(max == -1){
                    max = i-m[n];
                }
                else{
                    if(max<=i-m[n]){
                        max = i-m[n];
                    }
                }
            }
        }
        return max;
        // Your code here
    }