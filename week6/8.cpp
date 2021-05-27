class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> sol;
        queue<Node*> q;
        q.push(node);
        if(node!=NULL)
        while(!q.empty()){
            sol.push_back(q.front()->data);
            Node * buff = q.front();
            q.pop();
            if(buff->left!=NULL)
            q.push(buff->left);
            if(buff->right!=NULL)
            q.push(buff->right);
        }
        return sol;
      //Your code here
    }
};