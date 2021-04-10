class Solution{
    public:
    
    int att(char c){
        return c-48;
    }
    
    long long getNextEven(string x)
    {
        //if(att(x.back())%2==0) return taa(x);
        bool b =false;
        for(auto &i:x){
            //cout<<(char)(i-48);
            if((i-48)%2==0) b=true;
            
        }
        if(!b) return -1;
        if(!next_permutation(x.begin(),x.end())) return -1;
        while(att(x.back())%2!=0)
            {
                if(!next_permutation(x.begin(),x.end())) return -1;

            }
        return taa(x);
    }

    long long taa(string &x){
        long long val=0;
        for(int i=0;i<x.size();i++){
            val= val*10 + att(x[i]);
        }
        return val;
    }
};