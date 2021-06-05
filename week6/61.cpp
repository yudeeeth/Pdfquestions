Node* tree(vector<vector<int>>& ans){
    map<int,Node*> m;
    for(int i=0;i<and.size();i++){
        m[i]=new Node(i);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            if(a[i][j]){
                if(m[i]->left==NULL){
                    m[i]->left = m[j];
                }
                else{
                    m[i]->right = m[j];
                }
            }
        }
    }
    return tree;
}