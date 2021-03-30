class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i,j;
	    i=0;j=-1;
	    for(i=0;i<n;i++){
	        if(arr[i]==0) {continue;}
	        else{
	            j++;
	            arr[j] = arr[i];
	        }
	    }
	    j++;
	    for(;j<n;j++){
	        arr[j]=0;
	    }
	}
};