
class Solution {
public:
    int guessNumber(int n) {
        long long int left = 1;
        long long int right = n;
        long long int mid;
        while(left<=right){
            mid = (left+right)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==1){
                left = mid+1;
            }
            else right = mid-1;
        }
        return -1;
    }
};