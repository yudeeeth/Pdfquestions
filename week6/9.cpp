
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *node)
    {
        if(node==NULL) return;
        if(node->left!=NULL){
            if(node->right!=NULL){
                node->left->nextRight = node->right;
            }
            else{
                node->left->nextRight = getnext(node);
            }
        }
        if(node->right!=NULL){
            node->right->nextRight = getnext(node);
        }
        connect(node->left);
        connect(node->right);
       // Your Code Here
    }    
    
    Node * getnext(Node* node){
        node = node->nextRight;
        while(node!=NULL){
            if(node->left!=NULL) return node->left;
            else if(node->right!=NULL) return node->right;
            node = node->nextRight;
        }
        return NULL;
    }
      
};


