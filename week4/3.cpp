 ListNode* swapPairs(ListNode* head) {
        int k = 2;
    // }
    // struct node *reverse (struct node *head, int k)
    // { 
        // Complete this method
        ListNode * temp = new ListNode(0);
        temp->next = head;
        stack<ListNode*> s;
        ListNode * buff = head;
        ListNode * st;
        while(buff!=NULL){
            s.push(buff);
            if(s.size()==k){
                temp->next = buff;
                st = buff->next;
                s.pop();
                //cout<<buff->data<<" ";
                while(!s.empty()){
                    buff->next = s.top();
                    s.pop();
                    buff = buff->next;
                    //cout<<buff->data<<" ";
                }
                buff->next = swapPairs(st);
                return temp->next;
                
            }
            buff=buff->next;
        }
        while(!s.empty()) s.pop();
        buff = head;
        while(buff!=NULL) {s.push(buff); buff = buff->next;}
        buff = temp;
        while(!s.empty()) {
            buff->next = s.top();
            s.pop();
            buff = buff->next;
            buff->next = NULL;
        }
        return temp->next;
        
    }