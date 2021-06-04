void doit(vector<int> &sol,Node * root, int low, int high){
    if(root==NULL) return;
    doit(sol,root->left,low,high);
    if(low<=root->data && root->data<=high) sol.push_back(root->data);
    doit(sol,root->right,low,high);
}

//Function to return a list of BST elements in a given range.
vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> sol;
    doit(sol,root,low,high);
    return sol;
  // your code goes here   
}
