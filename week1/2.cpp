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

//solution function from gfg woked
// class Solution{   
// public:
//     int getOddOccurrence(int arr[], int n) {
//         // code here
//         int sol=0;
//         for(int i=0;i<n;i++){
//             sol = sol^ arr[i];
//         }
//         return sol;
//     }
// };