#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node * next;
};

void push(Node * &head,int val){
    Node *n= new Node();
    n->val = val;
    n->next =NULL;
    if(head!=NULL)
    head->next = n;
    else head = n;
    head = n;
}

void print(Node * head){
    if(head==NULL) return;
    print(head->next);
    cout<<head->val<<" ";
}

int main() {
    int n;
    cin>>n;
    int t;
    Node * head = NULL;
    Node * temp = NULL;
    for(int i=0;i<n;i++){
        cin>>t;
        push(temp,t);
        if(i==0){
            head = temp;
        }
    }
    print(head);
}