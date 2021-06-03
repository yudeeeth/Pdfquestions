//Function to find the minimum element in the given BST.
int minValue(Node* root)
{
    // Code here
    if(root==NULL) return -1;
    if(root->left)
    return minValue(root->left);
    return root->data;
}
