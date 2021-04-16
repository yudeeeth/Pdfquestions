int intersectPoint(Node* head1, Node* head2)
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
    if(t1==NULL) return -1;
    return t1->data;
    // Your Code Here
}
