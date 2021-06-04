class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
        if(root==NULL) return NULL;
        Node * p = pred(root->left);
        Node * s = succ(root->right);
        Node * first = succ(root->left);
        if(first==NULL) first = root;
        bToDLL(root->left);
        bToDLL(root->right);
        if(p!=NULL) p->right = root;
        root->left = p;
        if(s!=NULL) s->left = root;
        root->right = s;
        return first;
    }
    
    Node * pred(Node * root){
        if(root==NULL) return NULL;
        while(root->right!=NULL){
            root=root->right;
        }
        return root;
    }
    Node * succ(Node * root){
        if(root==NULL) return NULL;
        while(root->left!=NULL){
            root = root->left;
        }
        return root;
    }
};
