    Node* rotate(Node* head, int k)
    {
        
        Node * buff = head;
        Node*temp;
        if(head==NULL) return head;
        while(buff->next!=NULL){
            
            //cout<<buff->val<<" ";
            buff = buff->next;
        }
        buff->next = head;
        //cout<<head->val<<" ";
        while(k>0){
            //cout<<buff->val<<" ";
            buff = buff->next;
            k--;
        }
        //cout<<buff->val<<" ";
        temp = buff->next;
        //cout<<buff->val<<" ";
        buff->next = NULL;
        return temp;
        
    }