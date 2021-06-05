int count(Node* head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->right;
    }
    return c;
}

Node* make(int n,Node* &head){
    if(n<=0) return NULL;
    Node * left = make(n/2,head);
    Node* root=head;
    root->left = left;
    head= head->right;
    root->right = make(n-n/2-1,head);
    return root;
}

Node * lltobst(Node * head){
    int n = count(head);
    Node * root = make(n,head);
}