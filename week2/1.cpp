	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int i,j;
	    i=0;j=n-1;
	    while(i<j){
	        if(arr[i]+arr[j]==x) return true;
	        else if(arr[i]+arr[j]>x) j--;
	        else i++;
	    }
	    return false;
	}
	