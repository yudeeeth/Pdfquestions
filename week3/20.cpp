void alternatingSplitList(struct Node* head) 
{
    //Your code here
        Node *ta,*tb;
        bool bol = true;
        a = NULL;b = NULL;
        Node * buff = head;
        while(buff!=NULL){
            if(bol){
                if(a==NULL){
                    a = buff;
                    buff = buff->next;
                    a->next = NULL;
                    ta = a;
                }
                else{
                    ta->next = buff;
                    buff = buff->next;
                    ta = ta->next;
                    ta->next = NULL;
                }
            }
            else{
                if(b==NULL){
                    b = buff;
                    buff = buff->next;
                    b->next = NULL;
                    tb = b;
                    
                }
                else{
                    tb->next = buff;
                    buff = buff->next;
                    tb = tb->next;
                    tb->next = NULL;
                }
            }
            //buff=buff->next;
            bol = !bol;
        }
   //Code here
}