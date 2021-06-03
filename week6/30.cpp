class Solution
{
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL||(root->left==NULL && root->right==NULL)) return true;
         bool t1 = isSumTree(root->left);
         bool t2 = isSumTree(root->right);
         return (getval(root->right)+getval(root->left)==root->data) && t1&& t2; 
    }
    
    int getval(Node * node){
        if(node==NULL) return 0;
        if(node->right==NULL && node->left==NULL) return node->data;
        return 2*node->data;
    }
};