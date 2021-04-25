//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    if(K>num) return NULL;
    Node *m = new Node(0);
    m->next = head;
    //return m->next;
    Node *first,*second,*end;
    first = m;second = m;end = m;
    int fc,sc;
    sc=-1;
    fc=1;
    while(end!=NULL){
        if(fc<K){
            first = first->next;
            fc++;
        }
        end = end->next;
        if(sc==K){
            second = second->next;
        }
        else{
            sc++;
        }
    }
    //cout<<first->next->data<<second->next->data;
    if(first->next && first->next->next == second->next){
        first->next = first->next->next;
        Node*temp = first->next->next;
        first->next->next = second;
        second->next = temp;
    }
    else if(second->next && second->next->next == first->next){
        second->next = second->next->next;
        Node*temp = second->next->next;
        second->next->next = first;
        temp->next = temp;
    }
    else {
        //cout<<"last";
        Node* fe = first->next->next;
        Node*se = second->next->next;
        Node*t1 = first->next;
        Node*t2 = second->next;
        second->next = t1;
        t1->next = se;
        first->next = t2;
        t2->next = fe;
    }
    return m->next;
    // Your Code here
}
