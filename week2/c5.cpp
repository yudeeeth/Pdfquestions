#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void swap(vector<int> &arr, int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void transpose(vector<int> &arr, int n, int m){
    int i,j;
    int toi,toj;
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr,i*m+j,j*n+i);
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