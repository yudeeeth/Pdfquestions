void deletetree(Node* node){
    if(node==NULL) return;
    deletetree(node->left);
    deletetree(node->right);
    free(node) return;
}