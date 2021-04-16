/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    Node * mid,*last;
    mid = head;
    last = head;
    while(mid&&last&&last->next){
        mid = mid->next;
        last = last->next->next;
    }
        return mid->data;
   // Your code here
}
