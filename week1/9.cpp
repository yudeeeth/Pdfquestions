#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoOddNum(int Arr[], int N)  
{
    // code here
    int norm=0;
    for(int j=0;j<N;j++){
        norm = norm ^ Arr[j];
    }
    int i=0;
    int temp = norm;
    cout<<norm;
    while(((norm>>i)&1 )!=1){
        i++;
    }
    cout<<i;
    norm = 0;
    for(int j=0;j<N;j++){
        if(((Arr[j]>>i)&1) ==1) norm = norm^Arr[j];
    }
    cout<<norm;
    vector<int> sol;
    sol.push_back(norm);
    sol.push_back((norm^temp));
    sort(sol.begin(),sol.end(),greater<int>());
    return sol;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> sol = twoOddNum(arr,n);
    for(auto x : sol)
        cout<<x<<" ";
    cout<<endl;

}