
int getval(Node * n){
    if(n==NULL) return 0;
    return n->data;
}

bool checksum(Node * root){
    bool l = checksum(root->left);
    bool r = checksum(root->right);
    return l && r && node->data == getval(node->right)+getval(node->left);
}
