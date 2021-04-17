class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * buff = head;
        while(buff!=NULL && buff->next!=NULL){
            while(buff->next!=NULL && buff->val==buff->next->val){
                ListNode *temp = buff->next;
                buff->next = buff->next->next;
                //free(temp);
            }
            buff= buff->next;
        }
        return head;
    }
};