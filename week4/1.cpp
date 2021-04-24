class stack{
    public:
    Node * head;
    Node * buff;
    stack(){
        head = NULL;
    }
    bool empty(){
        return (head == NULL);
    }
    void push(int data){
        Node * buff = new Node(data);
        buff->next = head;
        head = buff;
    }
    void pop(){
        buff = head;
        head = head->next;
        free(buff);
    }
    int top(){
        return head->data;
    }
};

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack s1,s2;
        Node* buff = first;
        while(buff){
            s1.push(buff->data);
            buff = buff->next;
        }
        buff = second;
        while(buff){
            s2.push(buff->data);
            buff = buff->next;
        }
        Node *head=NULL;
        int carry = 0;
        while(!s1.empty()&& !s2.empty()){
            buff = new Node((s1.top()+s2.top()+carry)%10);
            carry = (s1.top()+s2.top()+carry)/10;
            buff->next = head;
            head = buff;
            s1.pop();
            s2.pop();
        }
        if(s1.empty()){
            while(!s2.empty()){
            buff = new Node((s2.top()+carry)%10);
            carry = (s2.top()+carry)/10;
            buff->next = head;
            head = buff;
            s2.pop();
            }
        }
        else{
            while(!s1.empty()){
            buff = new Node((s1.top()+carry)%10);
            carry = (s1.top()+carry)/10;
            buff->next = head;
            head = buff;
            s1.pop();
            }
        }
        while(carry!=0){
            buff = new Node((carry)%10);
            carry = (carry)/10;
            buff->next = head;
            head = buff;
        }
        return head;
        
        // code here
    }
};