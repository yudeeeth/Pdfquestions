#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool equ(vector<int> a1, vector<int> a2){
    return (a1[0]==a2[0] && a1[1]==a2[1] && a1[2]==a2[2]);
}

vector< vector<int> > threeSum(vector<int> &A) {
    vector<vector<int>> sol;
    vector<int> k(3);
    sort(A.begin(),A.end());
    for(auto x : A) cout<<x<<" ";
    cout<<endl;
    int f,b,temp;
    for(int it=0;it<A.size();it++){
        f=0;
        b=A.size()-1;
        temp = -A[it];
        cout<<"here"<<endl;
        while(f<b){
            if(f==it) f++;
            else if(b==it) b--;
            else if(A[f]+A[b]==temp) {
               
                k[0] = temp;
                k[1] = A[f];
                k[2] = A[b];
                sort(k.begin(),k.end());
                bool t=false;
                for(int i=0;i<sol.size();i++){
                    if(equ(k,sol[i])) t=true;
                }
                if(!t) sol.push_back(k); 
                f++;
            }
            else if(A[f]+A[b]>temp) b--;
            else f++;
        }
    }
    return sol;
}


int main(){
    int k;
    cin>>k;
    vector<int> A(k);
    for (auto &x : A){
        cin>>x;
        cout<<x;
    }
    cout<<endl;
    vector<vector<int>> sol = threeSum(A);
    for(auto x : sol){
        for(auto i : x){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}