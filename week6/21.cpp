vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> sol;
   queue<Node*> q;
   if(root==NULL) return sol;
   q.push(root);
   int level=0;
   while(!q.empty()){
       int sz = q.size();
       while(sz--){
       Node * temp = q.front();
       q.pop();
       if(sol.size()==level) sol.push_back(temp->data);
       if(temp->left) q.push(temp->left);
       if(temp->right) q.push(temp->right);
       }
       level++;
   }
   return sol;
}
