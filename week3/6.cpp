class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {   
        Node *s,*f;
        s = head;f=head;
        while(s && f && f->next){
            s = s->next;
            f = f->next->next;
            if(s==f){
                return true;
            }
        }
        return false;
        // your code here
    }
};

