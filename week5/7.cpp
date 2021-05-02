class Solution {
public:
    int hIndex(vector<int>& c) {
        int left = 0;
        int right = c.size()-1;
        int mid;
        int temp=0;
        while(left<=right){
            mid = left + (right-left)/2;
            if(c[mid]>=c.size()-mid){
                temp = (temp>c.size()-mid)?temp:c.size()-mid;
                right = mid-1;    
                continue;
            }
            left = mid+1;
        }
        return temp;
    }
};