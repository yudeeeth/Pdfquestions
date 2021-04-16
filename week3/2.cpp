
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {   static Node * start=NULL;
        static Node * H = NULL;
        if(H==NULL) H = head;
        if(head==NULL)
            {return NULL;}
        Node * ret = reverseList(head->next);
        if(ret==NULL){
            start = head;
            return head;
        }
        else{
            ret->next = head;
            head->next = NULL;
            if(H != head)
                return head;
            else return start;
        }
        // code here
        // return head of reversed list
    }
    
};
    