#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    vector<int> arr(k);
    k=0;
    for(auto &x : arr){
        cin>>x;
        k = k^x;
    }
    cout<<k;

}