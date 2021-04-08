class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i,j,min,minval;
	   // int temp = n;
	   // n=m;
	   // m=temp;
	    i=0;
	    j=m-1;
	    min=-1;
	    while(i<n&& j>-1){
	        if(arr[i][j]==0) {
	            if(min==-1 || minval<m-j-1) {
	                minval = m-j-1;
	                min = i;
	            }
	            i++;
	        }
	        else if(arr[i][j]==1) {
	            j--;
	            if(j==-1){
	                return i;
	            }
	            
	        }
	    }
	    if(minval==0) return -1;
	    return min;
	}

};