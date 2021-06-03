class Solution{
    public:
    //Function to convert a binary tree into its mirror tree.
    void mirror(Node* node)
    {
        if(node==NULL) return;
        mirror(node->left);
        mirror(node->right);
        swap(node);
     // code here
    }
    void swap(Node * node){
        Node * temo = node->right;
        node->right = node->left;
        node->left = temo;
    }
};