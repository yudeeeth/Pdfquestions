void bstbt(Node * root){
    static int sum = 0;
    bstbt(root->right);
    root->data+=sum;
    sum = root->data;
    bstbt(root->right);
}