#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    srand(clock());
    vector<int> k(100000);
    vector<int> k2(100000);
    for(auto &x : k){
        x = rand()% 100000;
    }
    for(auto &x : k2){
        x = rand()% 100000;
    }
    for(auto &x : k){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto &x : k2){
        cout<<x<<" ";
    }
    cout<<endl;
}