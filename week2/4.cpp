int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    long int f,b,temp,min;
    min=0;
    for(int it=0;it<A.size();it++){
        f=0;
        b=A.size()-1;
        temp = (long) B - (long)A[it];
        while(f<b){
            if(f==it) f++;
            else if(b==it) b--;
            else if(A[f]+A[b]==temp) {
                return ((long)B-temp+(long)A[f]+(long)A[b]);
            }
            else if(A[f]+A[b]>temp) {
                if(min==0) min = ((long)B-temp+(long)A[f]+(long)A[b]);
                else if(abs((long)B - min)>abs(temp-(long)A[f]-(long)A[b])) {min = ((long)B-temp+(long)A[f]+(long)A[b]);}
                b--;}
            else {                
                if(min==0) min = ((long)B-temp+(long)A[f]+(long)A[b]);
                else if(abs((long)B - min)>abs(temp-(long)A[f]-(long)A[b])) {min = ((long)B-temp+(long)A[f]+(long)A[b]);}
                f++;}
        }
    }
    return min;
}