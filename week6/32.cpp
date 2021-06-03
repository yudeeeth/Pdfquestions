int abs(int n){
    if(n<0) return -n;
    return n;
}

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int isbal(Node *root){
    if(root==NULL) return 0;
    int l = isbal(root->left);
    int r = isbal(root->right);
    if(l==-1 || r==-1 || abs(l-r)>1) return -1;
    return max(l,r)+1;
}

bool isBalanced(Node *root)
{
    //  Your Code here
    int sol = isbal(root);
    if(sol==-1) return false;
    return true;
}
