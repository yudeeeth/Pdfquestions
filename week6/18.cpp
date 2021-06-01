int countLeaves(Node* root)
{
    if(root->right==NULL && root->left == NULL) return 1;
    int left = 0;
    int right = 0;
    if(root->right) right = countLeaves(root->right);
    if(root->left) left = countLeaves(root->left);
    return left+right;
  // Your code here
}
