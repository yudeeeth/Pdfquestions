class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root)
    {
       // Your code here
       int max=0;
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int sz = q.size();
           if(sz>max) max = sz;
           while(sz--){
               Node * temp = q.front();
               q.pop();
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
           }
       }
       return max;
    }
};

