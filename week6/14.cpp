class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        if(checknode(root,0)==-1)return false;
        return true;
        //Your code here
    }
    
    int checknode(Node* root,int ind){
        int left=-2;
        int right=-2;
        if(root->right) right = checknode(root->right,ind+1);
        if(root->left) left = checknode(root->left,ind+1);
        
        if(root->right==NULL && root->left==NULL) return ind;
        if(left==-1 || right==-1 ) return -1;
        if(left>0 &&right>0 && left!=right) return -1;
        if(left>0) return left;
        if(right>0) return right;
    }
};
