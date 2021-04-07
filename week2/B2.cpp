#include<iostream>
#include<bits/stdc++.h>
#define MAX 20
using namespace std;

void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){
    srand(clock());
    vector<int> arr(MAX);
    for(int i=0;i<arr.size();i++){
        arr[i] = i+1;
    }
    int j;
    for(int i=arr.size()-1;i>=0;i--){
        j = rand() % (i+1);
        swap(arr,i,j);
    }
    for(auto x : arr)
        cout<<x<<" ";
    cout<<endl;
}