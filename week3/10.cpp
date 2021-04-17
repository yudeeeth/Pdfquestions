Node* findIntersection(Node* head1, Node* head2)
{  
    // Node * head = NULL;
    // Node * buff = NULL;
    // while(head1&&head2){
    //     if(head1->data==head2->data){
    //         if(head==NULL){
    //             head = new Node(head1->data);
    //             buff = head;
    //             //head->data = head1->data;
    //             buff->next=NULL;
    //         }
    //         else{
    //             Node* temp = new Node(head1->data);
    //             buff->next = temp;
    //             //temp->data = head1->data;
    //             buff = temp;
    //             buff->next=NULL;
    //         }
    //         buff->data = buff->data;
    //         while(head1->next && head1->next->data==data)head1=head1->next;
    //         while(head2->next && head2->next->data==data)head2=head2->next;
    //         //if(head1->next)
    //         head1 = head1->next;
    //         //if(head2->next)
    //         head2 = head2->next;
    //     }
    //     else{
    //         if(head1->data<head2->data)
    //         while(head1 && head1->data<head2->data){
    //             head1 = head1->next;
    //         }
    //         else
    //         while(head2&& head2->data<head2->data){
    //             head2=head2->next;
    //         }
    //     }
    //     return head;
    // }
    // Your Code Here
    unordered_set<int> m;
    Node * buff = head1;
    while(buff!=NULL){
        m.insert(buff->data);
        buff = buff->next;
    }
    buff = head2;
    Node * head = NULL;
    Node * temp = NULL;
    while(buff!=NULL){
        if(m.find(buff->data)!=m.end()){
            if(head == NULL){
                head = new Node(buff->data);
                temp = head;
            }
            else {
                temp->next = new Node(buff->data);
                temp = temp->next;
            }
            m.erase(buff->data);
        }
        buff = buff->next;
    }
    return head;
}