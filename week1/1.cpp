#include<iostream>
#include<vector>
using namespace std;

void count(vector<int> v1,vector<int> v1){
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
    cout<<counter;
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
    count(v1,v2);
}