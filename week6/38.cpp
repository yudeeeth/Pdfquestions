void prop(Node *root, int diff){
    if(root->left){
        root->left->data+=diff;
        prop(root->left,diff);
    }
    else if(root->right){
        root->right->data+= diff;
        prop(root->right,diff);
    }
}

int getval(Node* node){
    if(node==NULL) return 0;
    else return node->data;
}

void checksum(Node * root){
    if(root==NULL || (root->right==NULL && root->left==NULL)) return;
    checksum(root->left);
    checksum(root->right);
    diff = root->data - getval(root->right)-getval(root->left);
    if(diff==0) return;
    if(diff<0){
        root->data+=diff;
        return;
    }
    prop(root,diff);
}