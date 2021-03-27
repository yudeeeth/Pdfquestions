#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//solution function from gfg which worked
//naive set solution O(n) time and O(n) space
// pair<int,int> twoRepeated (int arr[], int N)
//     {
//         unordered_set<int> m;
//         pair<int,int> sol;
//         sol.first = 0;
//         sol.second = 0;
//         for(int i=0;i<N+2;i++){
//             if(m.find(arr[i])!=m.end()){
//                 sol.first = sol.second;
//                 sol.second = arr[i];
//             }
//             else{
//                 m.insert(arr[i]);
//             }
//         }
//         return sol;
//         // Your code here
//     }

//working code from gfg
pair<int,int> twoRepeated (int arr[], int N)
{
    pair<int,int> sol;
    sol.first = 0;
    sol.second = 0;
    for(int i=0;i<N+2;i++){
        if(arr[abs(arr[i])]<0){
            sol.first = sol.second;
            sol.second = abs(arr[i]);
        }
        else{
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
    }
    return sol;
}
int main(){
    int k;
    cin>>k;
    int arr[k];
    for(auto &i : arr){
        cin>>i;
    }
    pair<int,int> sol =  twoRepeated(arr,k);
    cout<<sol.first<<" "<<sol.second;
}