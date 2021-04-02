int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // unordered_map<int,int> m;
    // for( auto x : A){
    //     if(m.find(x)==m.end()){
    //         m[x] = 1;
    //         if(m[x]>A.size()/3) return x;
    //     }
    //     else{
    //         m[x]=m[x]+1;
    //         if(m[x]>A.size()/3) return x;
    //     }
    // }
    // return -1;
    int c1,c2,n1,n2;
    c1=0;c2=0;n1=0;n2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==n1) c1++;
        else if(A[i]==n2) c2++;
        else if(c1==0) {n1 = A[i]; c1++;}
        else if(c2==0) {n2 = A[i]; c2++;}
        else {c1--;c2--;}
    }
    c1=0;c2=0;
    for(auto x: A){
        if(x==n1) c1++;
        if(x==n2) c2++;
    }
    if(c1>A.size()/3) return n1;
    if(c2>A.size()/3) return n2;
    return -1;
}
