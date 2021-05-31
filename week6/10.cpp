//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<int> sol;
    queue<Node*> q;
    if(root==NULL) return sol;
    bool level = 1;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> temp;
        while(size--){
            Node* t = q.front();
            q.pop();
            temp.push_back(t->data);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        if(level) reverse(temp.begin(),temp.end());
        for(auto &x : temp) sol.push_back(x);
        level = !level;
        temp.clear();
    }
    //Your code here
}
