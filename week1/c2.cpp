class Solution {
public:
    string convertToTitle(int c) {
        string sol;
        while(c!=0){
            if(c%26!=0){
                sol.push_back(inttochar(c%26));
            c= floor(c/26);
            }
            else {sol.push_back('Z');
                 c= floor(c/26);
                 c-=1;}
            
        }
        reverse(sol.begin(),sol.end());
        return sol;
        
    }
    char inttochar(int i){
        return 64+i;
    }
};