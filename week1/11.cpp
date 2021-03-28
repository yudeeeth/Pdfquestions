#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void minmax(vector<int> &arr){
    int max,min,i;
    if(arr.size()==0) return;
    if(arr.size()==1) {cout<< arr[0]<<" "<<arr[0]<<endl; return;}
    max = arr[0]>arr[1]?arr[0]:arr[1];
    min = arr[0]>arr[1]?arr[1]:arr[0];
    for( i=2;i<arr.size()-1;i+=2){
        if(arr[i]<arr[i+1]){
            if(max<arr[i+1]) max = arr[i+1];
            if(min>arr[i]) min = arr[i];
        }
        else{
            if(max<arr[i]) max = arr[i];
            if(min>arr[i+1]) min = arr[i+1];
        }
    }
    if(arr.size()%2!=0){
        if(arr.back()>max) max = arr.back();
        if(arr.back()<min) min = arr.back();
    }
    cout<<min<<" "<<max<<endl;
}

int main(){
    int k;
    cin>>k;
    vector<int> arr(k);
    for(auto &x : arr){
        cin>>x;
    }
    minmax(arr);
}