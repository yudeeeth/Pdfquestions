class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    int KthSmallestElement(Node *root, int K)
    {
        int num=0;
        Node * curr = root;
        if(root==NULL) return 0;
        while(curr!=NULL){
            if(curr->left==NULL){
                num++;
                if(num==K) return curr->data;
                curr = curr->right;
            }
            else{
                Node *pred = findpred(curr);
                if(pred->right==NULL){
                    pred->right = curr;
                    curr = curr->left;
                }
                else{
                    pred->right = NULL;
                    num++;
                    if(num==K) return curr->data;
                    curr = curr->right;
                }
            }
        }
        return -1;
    }
    
    Node * findpred(Node * node){
        Node * buff = node->left;
        while(buff->right!=NULL && buff->right!=node){
            buff = buff->right;
        }
        return buff;
        
    }
};