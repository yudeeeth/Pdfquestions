class Solution {
public:
    int titleToNumber(string c) {
        int val=0;
        for(char i : c){
            val = val*26 + valofchar(i);
        }
        return val;
    }
    int valofchar(char i){
        return i-64;
    }
};