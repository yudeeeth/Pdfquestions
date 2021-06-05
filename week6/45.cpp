bool del(node * root,int k, int sum=0){
    if(root==NULL) return true;
    if(root->right==NULL && root->left==NULL) {
        if(sum+root->data<k) return true;
        return false;
    }
    bool l = del(root->left,int k,sum+root->data);
    bool r = del(root->right,int k,sum+root->data);
    if(l&&r){
        rem(root->right);
        rem(root->left);
        return true;
    }
    if(l) rem(root->left);
    else if(r) rem(root->right);
    return false;
}

void rem(Node * root){
    if(root==NULL) return;
    free(root);
}