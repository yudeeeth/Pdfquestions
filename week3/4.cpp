class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // static Node * start = head;
        // if(head==NULL) return true;
        // bool temp = isPalindrome(head->next);
        // if(!temp) return false;
        // else if(start == head || head->next==start){
        //     return true;
        // }
        // else if(start->data==head->data){
        //     start=start->next;
        //     return true;
        // }
        // else return false;
        // //Your code here
        stack<int> s;
        Node * temp = head;
        while(temp!=NULL){
            s.push(temp->data);
            temp=temp->next;
        }
        temp = head;
        while(temp!=NULL){
            if(s.top()==temp->data){
                s.pop();
                temp=temp->next;
            }
            else return false;
        }
        return true;
    }
};
