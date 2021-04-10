class Solution {
public:
    int maxProfit(vector<int>& p) {
        vector<int> high(p.size());
        int n = p.size();
        high[n-1] = n-1;
        for(int i=n-2;i>=0;i--){
            if(p[i]>p[high[i+1]]) {
                high[i] = i;
            }
            else{
                high[i] = high[i+1];
            }
        }
        int max = 0;
        int tempmax = 0;
        for(int i=0;i<n;i++){
            tempmax = p[high[i]]-p[i];
            if(tempmax>max) max = tempmax;
        }
        return max;
    }
};