vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> sol;
  queue<Node*> q;
  q.push(root);
  while(k--){
      int sz = q.size();
      while(sz--){
      Node * t = q.front();
      q.pop();
      if(t->left) q.push(t->left);
      if(t->right) q.push(t->right);
      }
  }
  while(!q.empty()){
      sol.push_back(q.front()->data);
      q.pop();
  }
  return sol;
}