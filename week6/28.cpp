Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   
//   static Node * sol;
//   int left = 0;
//   int right = 0;
//   if(root->left)
//   left = LCA(root->left,n1,n2);
//   if(root->right)
//   right = LCA(root->right,n1,n2);
//   int val = 0;
   
   
//   return sol;
    if(n1>n2)
        {
            int temp = n2;
            n2 = n1;
            n1 = temp;
        }
    Node * buff = root;
    while(buff!=NULL){
        if(buff->data>=n1 && buff->data<=n2){
            return buff;
        }
        if(buff->data<n1){
            buff =buff->right;
        }
        else {
            buff = buff->left;
        }
    }
    return NULL;
}
