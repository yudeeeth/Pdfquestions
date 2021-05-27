class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    int diameter(Node* root)
    {
        pair<int,int> sol = callit(root);
        if(sol.first>sol.second) return sol.first;
        return sol.second;
    // Your code here
    }
    pair<int,int> callit(Node * node){
        pair<int,int> ret;
        if(node==NULL) {
            ret.first = 0;
            ret.second = 0;
            return ret;
        }
        pair<int,int> l = callit(node->left);
        pair<int,int> r = callit(node->right);
        ret.first = maxe(l.second+r.second+1,l.first,r.first);
        ret.second = maxe(l.second,r.second,-1)+1;
        //cout<<ret.first<<ret.second<<endl;
        return ret;
    }
    int maxe(int a, int b, int c){
        if(a>=b && a>=b) return a;
        if(b>=a && b>=c) return b;
        return c;
    }
};