class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    for(auto &x : mat){
	        if(binsearch(x,X)) return true;
	    }
	    return false;
	    // your code here
	}
	bool binsearch(vector<int> &arr,int X){
	    int l,r,mid;
	    l=0;
	    r=arr.size()-1;
	    if(X < arr[l] || X> arr[r]) return false;
	    while(l<=r){
	        mid = l+(r-l)/2;
	        if(X==arr[mid]) return true;
	        //if(r==l+1 ) return false;
	        if(X> arr[mid]) l=mid+1;
	        else r=mid-1;
	    }
	    return false;
	}
};
