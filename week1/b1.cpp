class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int i,j;
	    i=0;
	    j=0;
	    for(i=0;i<n;i++){
	        if(arr[i]%2==0){
	            swap(arr,j,i);
	            j++;
	        }
	    }
	    sort(arr,arr+j);
	    sort(arr+j,arr+n);
	    
	}
	void swap(int arr[],int i,int j){
	    int temp = arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
	}
};
