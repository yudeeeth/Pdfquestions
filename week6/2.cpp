class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL) return 0;
        return maxe(height(node->right),height(node->left))+1;
    }
    int maxe(int a, int b){
        if(a>b) return a;
        return b;
    }
};
