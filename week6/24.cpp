void doubletree(Node * root){
    if(root==NULL) return;
    Node * temp = new Node(root->data);
    temp->left = root->left;
    root->left = temp;
    doubletree(root->right);
    doubletree(temp->left);
}