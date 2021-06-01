

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        Node * sol = NULL;
        if(root==NULL) return NULL;
        recur(sol,root,n1,n2);
        return sol;
       //Your code here 
    }
    int recur(Node* &sol,Node * root, int n1, int n2){
        int val = 0;
        if(root->data==n1) val = 1;
        if(root->data==n2) val = 2;
        int left=0;
        int right=0;
        if(root->left) left = recur(sol,root->left,n1,n2);
        if(root->right) right = recur(sol,root->right,n1,n2);
        if(val+left+right==3 && sol==NULL) sol = root;
        return val+left+right;
    }
    
};