class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int toSumTree(Node *node)
    {
        if(node==NULL) return 0;
        int left = toSumTree(node->left);
        int right = toSumTree(node->right);
        int temp = node->data;
        node->data = left+right;
        return node->data+temp;
        // Your code here
    }
};
