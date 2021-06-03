int start(Node * root, bool b=false){
    if(b){
        return (root->left==NULL) && root->right==NULL;
    }
    if(root->left){
        if(root->right) return false;
        return true;
    }
    else if(root->right){
        return -1;
    }
    else return true;
}


    bool isCompleteBT(Node* root){
        //code here
        bool lf = false;
        queue<Node*> q;
        q.push(root);
        int f;
        while(!q.empty()){
                Node * temp = q.front();
                q.pop();
                
                if(lf){
                    if(!start(temp,1))
                    return false;
                }
                if(!lf)
                    {f = start(temp);
                if(f==-1) return false;
                else lf = f;}
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
        }
        return true;
    }