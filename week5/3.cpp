#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int majority(vector<int>&arr){
    int n = arr.size();
    int left = 0;
    int right = n;
    int mid;
    int l;
    int target = arr[right/2];
    while(left<right){
        mid =left+(right-left)/2;
        cout<<mid<<" ";
        if(arr[mid]<=target){
            right = mid;
        }
        else left = mid+1;
    }
    cout<<endl;
    cout<<mid;
    cout<<left;
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &x: arr){
        cin>>x;
    }
    cout<<majority(arr)<<endl;
}
