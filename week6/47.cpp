class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
        return Sum(root,0,S);
    }
    
    bool Sum(Node*root,int curr,int S){
        if(root==NULL) return false;
        if(root->right==NULL&&root->left==NULL){
            if(curr+root->data==S) return true;
            return false;
        }
        curr = curr+root->data;
        bool l = Sum(root->left,curr,S);
        bool r = Sum(root->right,curr,S);
        return l || r;
        
    }
};
