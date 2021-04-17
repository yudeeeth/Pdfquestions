class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node * a,*b;
        Node *ta,*tb;
        a = NULL;b = NULL;
        Node * buff = head;
        while(buff!=NULL){
            if(buff->data%2==0){
                if(a==NULL){
                    a = new Node(buff->data);
                    ta = a;
                }
                else{
                    ta->next = new Node(buff->data);
                    ta = ta->next;
                }
            }
            else{
                if(b==NULL){
                    b = new Node(buff->data);
                    tb = b;
                }
                else{
                    tb->next = new Node(buff->data);
                    tb = tb->next;
                }
            }
            buff=buff->next;
        }
        if(a==NULL) return b;
        else{
            ta->next = b;
            return a;
        }
    }
};
