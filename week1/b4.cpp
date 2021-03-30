    //dutch flag and naive solution;
    void sort012(int a[], int n)
    {
        // coode here 
        // int c[3];
        // c[0]=0;c[1]=0;c[2]=0;
        // for(int i=0;i<n;i++){
        //     c[a[i]]++;
        // }
        // int i;
        // for(i=0;i<c[0];i++){
        //     a[i]=0;
        // }
        // for(;i<c[0]+c[1];i++) a[i]=1;
        // for(;i<c[0]+c[1]+c[2];i++) a[i]=2;
        int l,m,h;
        l=0;m=0;h=n-1;
        int flag=0;
        while(m<=h || flag==0){
            if(m==h) flag=1;
            if(a[m]==0) {swap(a,l,m);l++;m++;}
            else if(a[m]==2) {swap(a,h,m);h--;}
            else m++;
        }
    }
    void swap(int arr[],int i,int j){
        int temp =arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }