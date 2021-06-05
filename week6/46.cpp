void pathuti(vector<vector<int>>&sol,vector<int> &start,Node* root){
    if(root->right==NULL && root->left==NULL) {sol.push_back(start); return;}
    if((root->right!=NULL)^ (root->left!=NULL)){
        if(root->left) {start.push_back(root->left->data); pathuti(sol,start,root->left);return;}
        else {start.push_back(root->right->data); pathuti(sol,start,root->right); return;}
    }
    vector<int> copy(start);
    copy.push_back(root->right->data);
    start.push_back(root->left->data);
    pathuti(sol,start,root->left);
    pathuti(sol,copy,root->right);
}

vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> sol;
    vector<int> start;
    start.push_back(root->data);
    pathuti(sol,start,root);
    return sol;
}