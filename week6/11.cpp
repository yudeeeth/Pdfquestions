vector<int> reverseLevelOrder(Node *root)
{
    vector<int> sol;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        sol.push_back(temp->data);
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
    }
    reverse(sol.begin(),sol.end());
    return sol;
    // code here
    
}
