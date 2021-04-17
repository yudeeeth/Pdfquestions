class Solution{
  public:
    Node* findUnion(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_set<int> m;
        while(head1!=NULL){
            m.insert(head1->data);
            head1 = head1->next;
        }
        while(head2!=NULL){
            m.insert(head2->data);
            head2 = head2->next;
        }
        Node * head,*temp;
        head = NULL;temp = NULL;
        unordered_set<int>::iterator it=m.begin();
        for(;it!=m.end();it++){
            if(head ==NULL){
                head = new Node(*it);
                temp = head;
            }
            else{
                temp->next = new Node(*it);
                temp = temp->next;
            }
        }
        return head;
    }
};
