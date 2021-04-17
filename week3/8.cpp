class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *s,*f,*t1,*t2;
        s = head;f=head;
        while(s && f && f->next){
            s = s->next;
            f = f->next->next;
            if(s==f){
                break;
            }
        }
        t1 = s->next;
        s->next = NULL;
        t2 = intersectPoint(head,t1);
        s->next = t1;
        while(t1->next!=t2){
            t1 = t1->next;
        }
        t1->next = NULL;
        //return false;
        // code here
        // just remove the loop without losing any nodes
    }
    Node * intersectPoint(Node* head1, Node* head2)
{
    int a,b;
    a = 0;b = 0;
    Node *t1,*t2;
    t1 = head1;
    while(t1!=NULL){
        a++;
        t1 = t1->next;
    }
    t2 = head2;
    while(t2!=NULL){
        b++;
        t2=t2->next;
    }
    t1=head1;t2=head2;
    while(a>b){
        t1=t1->next;
        a--;
    }
    while(b>a){
        t2 = t2->next;
        b--;
    }
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;
    }
    //if(t1==NULL) return -1;
    return t1;
    // Your Code Here
}
};