    void sort012(int a[], int n)
    {
        // coode here 
        int c[3];
        c[0]=0;c[1]=0;c[2]=0;
        for(int i=0;i<n;i++){
            c[a[i]]++;
        }
        int i;
        for(i=0;i<c[0];i++){
            a[i]=0;
        }
        for(;i<c[0]+c[1];i++) a[i]=1;
        for(;i<c[0]+c[1]+c[2];i++) a[i]=2;
    }