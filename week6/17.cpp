class Solution {
public:
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int> sol;
        if(root==NULL) return sol;
        sol.push_back(root->data);
        pushleft(root->left,sol);
        //sol.push_back(0);
        leaves(root,sol);
        //sol.push_back(0);
        pushright(root->right,sol);
        //sol.pop_back();
        return sol;
    }
    void pushleft(Node* root, vector<int>&sol){
        if(root==NULL) return;
        if(root->left){
            sol.push_back(root->data);
            pushleft(root->left,sol);
            
        }
        else if(root->right){
            sol.push_back(root->data);
            pushleft(root->right,sol);
        }
    }
    void leaves(Node * root, vector<int> &sol){
        if(root==NULL) return;
        if(root->right==NULL && root->left==NULL) {sol.push_back(root->data);return;}
        leaves(root->left,sol);
        leaves(root->right,sol);
    }
    void pushright(Node* root,vector<int>&sol){
        if(root==NULL) return;
        if(root->right){
            pushright(root->right,sol);
            sol.push_back(root->data);
        }
        else if(root->left){
            pushright(root->left,sol);
            sol.push_back(root->data);
            
        }
    }
};