//my old solution
class Solution {
public:
    int trap(vector<int>& height) {
    vector<int> newminmax = maximum(height);
    int min = newminmax[0];
    int max = newminmax[1];
    int count=0;
        for(int i=min;i<=max;i++){
            count += height[max]-height[i];
        }
        //(height[min]!=0 || height[max]!=0) && 
    while((min>0 || max<height.size()-1 )){
        newminmax = maximum(height,min,max);
        if(height[newminmax[1]]!=0)
        for(int i=max+1;i<=newminmax[1];i++){
            count+=(height[newminmax[1]]-height[i]);
        }
        if(height[newminmax[0]]!=0)
        for(int i = newminmax[0];i<min;i++){
            count+=(height[newminmax[0]]-height[i]);
        }
        min = newminmax[0];
        max = newminmax[1];
    }
        return count;
    }
    vector<int> maximum(vector<int> &height, int min=-1, int max=-1){
        int ret=0;
        vector<int> sol;

        if(max ==-1){
            min = height.size();
            max=-1;
        }
        sol.push_back(min);
        sol.push_back(max);
        ret=0;
        for(int i=min-1;i>=0;i--){
            if(height[i]>=ret){
                ret=height[i];
                sol[0]=i;
            }
        }
        ret=0;
        for(int i=max+1;i<height.size();i++){
            if(height[i]>=ret){
                ret=height[i];
                sol[1]=i;
            }
        }
        return sol;
    }
};