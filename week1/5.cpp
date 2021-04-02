int Solution::firstMissingPositive(vector<int> &A) {
    // if(A.size()==0) return 1;
    // int min,max;
    // min=A[0];
    // max =A[0];
    // for( auto x: A){
    //     if(x<min && min>=0){
    //         if(min-x==1) min--;
    //         else{
    //             min = x;
    //             max = x;
    //         }
    //     }
    //     else if(x-max==1) max++;
    // }
    // if(max==min && min==1) return 2;
    // if(max<1|| min>1) return 1;
    // return max+1;
    int ptr=0;
    for(auto x : A){
        if(x==1) {ptr = 1;break;}
    }
    if(ptr==0) return 1;
    for(auto &x: A){
        if(x<0||x>A.size()) x=1;
    }
    for(auto &x : A){
        A[(x-1)%A.size()] +=A.size();
    }
    for(int i=0;i<A.size();i++){
        if(A[i]<=A.size()) return i+1;
    }
    return A.size()+1;
}
