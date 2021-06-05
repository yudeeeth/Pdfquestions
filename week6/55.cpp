vector<Node*> 








Node * Merge(Node * root1, Node * root2){
    vector<Node*> l1 = inorder(root1);
    vector<Node*> l2 = inorder(root2);
    Node* sol = merge(l1,l2);
    int n = count(sol);
    Node * root= make(sol,n);
}
