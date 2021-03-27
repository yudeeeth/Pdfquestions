#include<bits/stdc++.h>

using namespace std;
//function from gfg which worked
int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int sum = n*(n+1)/2;
    for(auto x : array)
        sum -= x;
    return sum;
}

int main(){
    int k;
    cin>>k;
    vector<int> arr(k);
    for(auto &x : arr)
        cin>>x;
    cout<<MissingNumber(arr,k);
}