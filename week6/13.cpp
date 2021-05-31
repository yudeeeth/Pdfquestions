class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
        int sum = 0;
        queue<Node*> q;
        q.push(root);
        bool level = 1;
        if(root==NULL) return 0;
        while(!q.empty()){
            int tempsum = 0;
            int size = q.size();
            while(size--){
                Node * t = q.front();
                q.pop();
                tempsum+=t->data;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(level) sum+=tempsum;
            else sum-=tempsum;
            level = !level;
        }
        return sum;
    }
};
