class Solution {
public:
    bool isPalindrome(int x) {
        // if(x<0) return false;
        // string s;
        // while(x!=0){
        //     s.push_back(48+x%10);
        //     x/=10;
        // }
        // for(int i=0;i<s.size()/2;i++){
        //     if(s[i]!=s[s.size()-1-i]){
        //         return false;
        //     }
        // }
        // return true;
        if(x==0) return true;
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int rev = 0;
        while(x>rev){
            rev = rev*10 + x%10;
            x/=10;
        }
        if(rev ==x || x==rev/10) return true;
        return false;
    }
    
};