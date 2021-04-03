    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int f,b;
        int temp;
        f= 0;b = n-1;
        if(n<3) return false;
        sort(A,A+n);
        for(int i=0;i<n;i++){
            temp = X-A[i];
            f=0;
            b=n-1;
            while(f<b){
                if(f==i) f++;
                else if(b==i) b--;
                else if(A[f]+A[b]==temp) return true;
                else if(A[f]+A[b]>temp) b--;
                else f++;
            }
        }
        return false;
    }