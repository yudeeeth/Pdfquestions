    int equilibriumPoint(long long a[], int n) {
        long long int left[n],right[n];
        left[0]=0;
        right[n-1]=0;
        for(int i=1;i<n;i++){
            left[i] = left[i-1]+ a[i-1];
        }
        if(left[n-1]==0) return n;
        for(int i=n-2;i>=0;i--){
            right[i] = right[i+1] + a[i+1];
            if(right[i]==left[i]) return i+1;
        }
        return -1;
        // Your code here
    }
