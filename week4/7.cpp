class Solution {
public:
    ListNode* sortList(ListNode* head) {
        //is size==1 return
        if(head->next = NULL) return head;
        //split list into 2
        ListNode *a,*b;
        ListNode *ta,*tb;
        bool bol = true;
        a = NULL;b = NULL;
        ListNode * buff = head;
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
        //recursive sort each sublist
        ta = sortList(a);
        tb = sortList(b);
        //return merged list
        return sortedMerge(ta,tb);
    }
    
    ListNode* sortedMerge(ListNode* head1, ListNode* head2)  
    {  //merge two lists
        ListNode* head = new ListNode(0);
        ListNode * temp = head;
        while(head1 && head2){
            if(head1->val<head2->val){
                temp->next = head1;
                head1 = head1->next;
                temp = temp->next;
                temp->next = NULL;
            }
            else{
                temp->next = head2;
                head2 = head2->next;
                temp= temp->next;
                temp->next = NULL;
            }
        }
        if(head1==NULL){
            temp->next = head2;
        }
        else{
            temp->next = head1;
        }
        return head->next;
    }  
};