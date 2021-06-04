vector<int> ans(Node * root,int target){
    vector<int> sol;
    stack<Node*> s;
    s.push(root);
    Node* temp;
    Node* curr = root;
    while(!s.empty || curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
        else{
            temp = s.top()->right;
            if(temp==NULL){
                temp = s.top();
                s.pop();
                //visit;
                if(temp->data==target){
                    while(!s.empty()){
                        sol.push_back(s.top()->data);
                        s.pop();
                    }
                    break;
                }
                while(!s.empty() && temp==s.top()->right){
                    temp = s.top();
                    s.pop();
                }
            }
            else{
                curr = temp;
            }
        }
    }

    // while(!s.empty()){
    //     while(curr!=NULL){
    //         s.push(curr);
    //         curr = curr->left;
    //     }
    //     curr = s.top();
    //     s.pop();
    //     //visit 
    //     if(curr->data==target){
    //         break;
    //     }
    // }
    // if(curr->data==target){
    //     while(!s.empty()){
    //         sol.push_back(s.top()->data);
    //         s.pop();
    //     }
    // }
    return sol;
}