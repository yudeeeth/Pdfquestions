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
    return doit(head,n);

       // Your code here
}

