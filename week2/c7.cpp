#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	for(int it=0;it<n;it++){
	    int k,d;
	    cin>>k>>d;
	    vector<int> arr(k);
	    for(int i=0;i<k;i++){
	        if(i<d){
	            cin>>arr[k-d+i];
	        }
	        else cin>>arr[i-d];
	    }
	    for(auto &x : arr)
	        cout<<x<<" ";
	        cout<<endl;
	    
	}
	return 0;
}