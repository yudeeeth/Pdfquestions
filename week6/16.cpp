void vlo(Node * root){
    vector<int> sol;
    vector<int> solrev;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> temp;
        int sz = q.size();
        while(sz--){
            Node * t = q.front();
            q.pop();
            temp.push_back(t->data);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        for(auto &x: temp){
            solrev.push_back(x);
        }
    }
    int left = 0;
    int right=revsol.size();
    while(left<right){
        sol.push_back(solrev[left]);
        sol.push_back(solrev[right]);
        left++;
        right--;
    }
    if(left==right) sol.push_back(solrev[left]);
    return sol;
}