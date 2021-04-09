#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &sol, int i, int j){
    while(i>=0 && j<sol[0].size()){
        cout<<sol[i][j]<<" ";
        i--;
        j++;
    }
}

int main() {
	//code
	int n;
	cin>>n;
	for(int it=0;it<n;it++){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k,vector<int>(k));
	    for(int i=0;i<k;i++){
	        for(int j=0;j<k;j++){
	            cin>>arr[j][i];
	        }
	    }
	    int i=0;
	    int j=0;
	    while(j<arr[0].size()){
	        print(arr,i,j);
	        if(i==arr.size()-1) j++;
	        else i++;
	    }
	    cout<<endl;
	}
	return 0;
}