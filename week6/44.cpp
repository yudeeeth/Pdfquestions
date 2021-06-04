void del(Node*root){
    if(root==NULL) return;
    del(root->right);
    del(root->left);
    free(root);
}


Node* remrange(Node * root, int low, int high){
    if(root==NULL) return NULL;
    if(root->data<low) {
        Node* temp = root->right;
        root->right=NULL;
        del(root);
        return remroot(temp,low,high);
    }
    else if(root->data>high){
        Node* temp = root->left;
        root->left=NULL;
        del(root);
        return remroot(temp,low,high);
    }
    else {
        root->right = remroot(root->right);
        root->left = remroot(root->left);
        return root;
    }
}