vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   vector<long long  int> p1(n,1),p2(n,1);
   for(int i=1;i<n;i++){
       p1[i] = p1[i-1]*nums[i-1];
   }
   for(int i=n-2;i>=0;i--){
       p2[i] = p2[i+1]*nums[i+1];
   }
   for(int i=0;i<n;i++){
       p1[i] = p1[i]*p2[i];
   }
   return p1;
    //code here        
}
