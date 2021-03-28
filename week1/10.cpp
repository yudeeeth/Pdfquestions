#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str){
    int start,end;
    start = 0;
    end = str.size()-1;
    char temp;
    while(start<end){
        temp = str[start];
        str[start] =str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
  //Your code here
}
int main(){
    
}