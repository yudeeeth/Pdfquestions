int maxval(Node * root){
    static int max = INT_MIN;
    if(root==NULL) return 0;
    if(root->right==NULL && root->left==NULL){
        if(max<root->data){
            max = root->data;
        }
        return 0;
    }
    maxval(root->left);
    maxval(root->right);
    return max;
}