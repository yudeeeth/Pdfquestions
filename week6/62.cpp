void mat(vector<vactor<int>> & ans,Node*root,int par=-1){
    if(root==NULL) return;
    if(par!=-1){
        ans[par][root->data] = 1;
    }
    mat(ans,root->left,root->data);
    mat(ans,root->right,root->data);
}
