	void rearrange(int arr[], int n) {
	    // code here
	   // int i,j,temp;
	   // i=0;j=n-1;
	   // //int it=0;
	   // while(i<=j){
	   //     if(arr[i]<0) {swap(arr,i,j); j--;}
	   //     else i++;
	   // }
	   // int t = n-1;
	   //// for(int it = 1;it <=j+1;it+=2){
	   //// }
	   //int it=1;
	   //t = j;
	   //j++;
	   //while(it<=j&&j<n){
	   //    swap(arr,it,j);
	   //    j++;
	   //    it=it+2;
	   //}
	   deque<int> pos,neg;
	   vector<int> k;
	   for(int i=0;i<n;i++){
	       if(arr[i]>=0) pos.push_back(arr[i]);
	       else neg.push_back(arr[i]);
	   }
	   while(!(neg.empty() && pos.empty())){
	       if(!pos.empty()) { k.push_back(pos.front()); pos.pop_front(); }
	       if(!neg.empty()) { k.push_back(neg.front()); neg.pop_front(); }
	   }
	   for(int i=0;i<n;i++){
	       arr[i] = k[i];
	   }
	}
	void swap(int arr[],int i,int j){
	    int temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
	}