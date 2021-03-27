#include<bits/stdc++.h>
using namespace std;
//solution function from gfg which worked
//naive map solution O(n) time and O(n) space
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

pair<int,int> twoRepeated(int arr[], int N){

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