        int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            int i,j;
            int min=INT_MIN;
            i=0;j=n-1;
            while(i<j){
                if(arr[i]+arr[j]==0) return 0;
                else if(arr[i]+arr[j]>0){
                    if( abs((long)min) >= abs((long)arr[i]+(long)arr[j])){
                        min = arr[i]+arr[j];
                    }
                    j--;
                }
                else{
                    if( abs((long)min) > abs((long)arr[i]+(long)arr[j])){
                        min = arr[i]+arr[j];
                    }
                    i++;
                }
            }
            return min;
            // your code here 
        }