class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        vector<int> arr(3,0);
        Node * buff = head;
        while(buff!=NULL){
            arr[buff->data]++;
            buff = buff->next;
        }
        int i=0;
        buff = head;
        while(buff!=NULL){
            while(arr[i]==0) i++;
            buff->data = i;
            arr[i]--;
            buff = buff->next;
        }
        return head;
        // Add code here
        
    }
};
