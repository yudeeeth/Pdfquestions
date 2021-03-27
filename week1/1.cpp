#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count(vector<int> &v1,vector<int> &v2){
    int i,j;
    int counter=0;
    i=0;
    j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]==v2[j]){
            do{
            j++;}while(j<v2.size()&&j>0 && v2[j]==v2[j-1]);
            do{
            i++;}while(i<v1.size()&&i>0 && v1[i]==v1[i-1]);
            counter++;
        }
        else if(v1[i]>v2[j]){
            counter++;
            do{
            j++;}while(j<v2.size()&&j>0 && v2[j]==v2[j-1]);
        }
        else{
            counter++;
            do{
            i++;}while(i<v1.size()&&i>0 && v1[i]==v1[i-1]);
        }
    }
    if(i==v1.size() && j==v2.size())
        return counter;
    if(i==v1.size()){
        int k= j;
        while(k<v2.size()){
            counter++;
            while(k<v2.size() && v2[k]==v2[k+1]){
                k++;
            }
            k++;
        }
        return counter;
    }
    int k= i;
        while(k<v1.size()){
            counter++;
            while(k<v1.size() && v1[k]==v1[k+1]){
                k++;
            }
            k++;
        }
        return counter;
}

int main(){
    int s1,s2;
    cin>>s1>>s2;
    vector<int> v1(s1);
    vector<int> v2(s2);
    for(auto &x : v1){
        cin>>x;
    }
    for(auto &x : v2){
        cin>>x;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<count(v1,v2)<<endl;
}