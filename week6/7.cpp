class Solution
{
public:

    void populateNext(Node *root)
    {
        //code here
        static Node * prev = NULL;
        if(root==NULL) return;
        populateNext(root->left);
        if(prev!=NULL){
            prev->next=root;
        }
        prev = root;
        populateNext(root->right);
    }
};