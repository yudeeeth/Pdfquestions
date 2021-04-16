void deleteAlt(struct Node *head){
    Node *s,*f;
    s = head;
    f = head;
    while(f&&f->next){
        f = f->next->next;
        free(s->next);
        s->next = f;
        s=f;
    }
    // Code here
}
