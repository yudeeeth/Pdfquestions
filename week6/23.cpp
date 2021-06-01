#include<iostream>

using namespace std;

int thuemorse(int k){
    bool ans = false;
    while(k>0){
        if(k&1) ans=!ans;
        k=k>>1;
    }
    return ans;
}

int main(){
    for(int i=0;i<32;i++){
        cout<<thuemorse(i);
    }
}