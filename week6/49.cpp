    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int> sol;
        uti(sol,root,target);
        return sol;
         // Code here
    }
    bool uti(vector<int> &sol, Node * root, int target){
        if(root==NULL) return false;
        if(root->data == target) return true;
        bool left = uti(sol,root->left,target);
        bool right = uti(sol,root->right,target);
        if(left||right){
            sol.push_back(root->data);
            return true;
        }
        return false;
    }