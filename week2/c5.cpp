#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void swap(vector<int> &arr,vector<bool> &b, int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    b[i]=false;
    b[j] = false;
}

void transpose(vector<int> &arr, int n, int m){
    vector<bool> b(arr.size(),true);
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if()
            swap(arr,b,i*m+j,j*n+i);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n*m);
    for(auto &x : arr){
        cin>>x;
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    transpose(arr,n,m);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}