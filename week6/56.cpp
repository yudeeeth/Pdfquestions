class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> sol;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node * temp = q.front();
            q.pop();
            if(temp!=NULL){
                sol.push_back(temp->data);
                q.push(temp->left);
                q.push(temp->right);
            }
            else{
                sol.push_back(-1);
            }
        }
        return sol;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       Node* root = NULL;
       bool curr = false;
       queue<Node*> q;
       for(int i=0;i<A.size();i++){
           if(root==NULL){
               root = new Node(A[i]);
               q.push(root);
           }
           else{
               if(!curr){
                    Node * temp = q.front();
                    if(A[i]!=-1){
                        temp->left = new Node(A[i]);
                        q.push(temp->left);
                    }
                    else{
                        temp->left=NULL;
                    }
                    curr = !curr;
               }
               else{
                   Node * temp = q.front();
                   q.pop();
                   if(A[i]!=-1){
                        temp->right = new Node(A[i]);
                        q.push(temp->right);
                    }
                    else{
                        temp->right=NULL;
                    }
                    curr = !curr;
               }
           }
       }
       return root;
    }

};