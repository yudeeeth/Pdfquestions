// maintain two temp values storgin min and max element, and then at each element swpa or incrment them accordingly

    
    long long int maxe(long long int a, long long int b){
        if (a>b) return a;
        return b;
    }
    long long int min(long long int a, long long int b){
        if (a<b) return a;
        return b;
    }
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long int max = 1;
	    long long int tempmax, tempmin;
	    int flag = 0;
	    tempmax=1;
	    tempmin = 1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>0){
	            tempmax = tempmax*arr[i];
	            tempmin = min(tempmin*arr[i],1);
	            flag = 1;
	        }
	        else if(arr[i]==0){
	            tempmax=1;
	            tempmin = 1;
	        }
	        else {
	            long long int temp = tempmax;
	            tempmax = maxe(tempmin*arr[i],1);
	            tempmin = temp*arr[i];
	        }
	        if(tempmax>max){
	            max = tempmax;
	        }

	    }
	    if(flag==0 && max==0) return 0;
	    return max;
	}