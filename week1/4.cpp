#include<bits/stdc++.h>

using namespace std;
//function from gfg which worked
int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    //normal solution
    // int sum = n*(n+1)/2;
    // for(auto x : array)
    //     sum -= x;
    // return sum;
    // XOR method
    int a=0;
    int b=0;
    for(int i=1;i<n;i++){
        a = a^i;
        b = b^array[i-1];
    }
    a = a^n;
    return a^ b;
}

int main(){
    int k;
    cin>>k;
    vector<int> arr(k);
    for(auto &x : arr)
        cin>>x;
    cout<<MissingNumber(arr,k);
}