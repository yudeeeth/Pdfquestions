class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node *m = new Node(0);
        m->next = head;
        head = m;
        //Add code here   
        while(head && head->next){
            head = skip(head,M);
            dele(head,N);
        }
    }
    
    Node * skip(Node * head, int m){
        while(m>0){
            m--;
            head = head->next;
            if(head==NULL) return NULL;
        }
        return head;
    }
    void dele(Node * head, int n){
        if(head==NULL) return;
        while(n>0){
            n--;
            if(head->next!=NULL) {
                Node *temp = head->next;
                head->next = head->next->next;
                free(temp);
            }
            else break;
        }
        //return head;
    }
    
};
