int doit(Node * head, int &n){
    if(head==NULL)
        return -1;
    int sol = doit(head->next,n);
    n--;
    if(n==0){
        return head->data;
    }
    else return sol;
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    //return doit(head,n);
    Node * l,*r;
    l = head;
    r = head;
    int i=0;
    while(r!=NULL){
        r=r->next;
        
        if(i>=n){
            i--;
            l = l->next;
        }
        i++;
    }
    if(i>=n) return l->data;
    else return -1;

       // Your code here
}