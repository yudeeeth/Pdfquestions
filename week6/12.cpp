class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        vector<int> sol;
        recall(left,right,root,0);
        for(int i=left.size()-1;i>0;i--) sol.push_back(left[i]);
        for(auto &x: right) sol.push_back(x);
        return sol;
    }
    void recall(vector<int>&left,vector<int>&right,Node * root, int ind){
        if(root==NULL) return;
        if(ind<0){
            if(left.size()==-ind){
                left.push_back(root->data);
            }
            else{
                left[-ind] += root->data;
            }
        }
        else{
            if(right.size()==ind){
                right.push_back(root->data);
            }
            else{
                right[ind] += root->data;
            }
        }
        recall(left,right,root->right,ind+1);
        recall(left,right,root->left,ind-1);
    }
};