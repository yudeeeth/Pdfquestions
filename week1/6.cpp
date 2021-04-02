vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int mix=0;
    for(int i=0;i<A.size();i++){
        mix = mix^(i+1)^A[i];
    }
    int m = mix & ~(mix-1);
    int temp=0;
    for(int i=0;i<A.size();i++){
        if((A[i]&m) == m){
            temp = temp^A[i];
        }
        if(((i+1)&m)==m){
            temp = temp^(i+1);
        }
    }
    vector<int> sol(2);
    int c=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==temp) c++;
    }
    if(c==0){
        sol[1] = temp;
        sol[0] = temp^mix;
    }
    else{
        sol[0]=temp;
        sol[1]=temp^mix;
    }
    return sol;
}

