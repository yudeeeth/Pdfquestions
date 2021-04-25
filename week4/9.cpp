Node *copyList(Node *head) {
    // Your code here
    Node * submit = new Node(0);
    unordered_map<Node*,Node*> m;
    Node * buff = head;
    Node * temp = submit;
    while(buff){
        temp->next = new Node(buff->data);
        m[buff] = temp->next;
        buff = buff->next;
        temp = temp->next;
        temp->next = NULL;
    }
    buff = head;
    temp = submit->next;
    while(buff){
        temp->arb = m[buff->arb];
        buff = buff->next;
        temp = temp->next;
    }
    return submit->next;
}
