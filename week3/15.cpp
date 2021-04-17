#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        next = NULL;
    }
};

void push(Node * &head,int val){
    Node *n= new Node(val);
    if(head!=NULL)
    head->next = n;
    else head = n;
    head = n;
}


void print(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* head = new Node(0);
    Node * temp = head;
    bool b = true;
    while(head1 && head2){
        if(b){
            temp->next = head1;
            head1 = head1->next;
            temp = temp->next;
            temp->next = NULL;
        }
        else{
            temp->next = head2;
            head2 = head2->next;
            temp= temp->next;
            temp->next = NULL;
        }
        b = !b;
    }
    if(head1==NULL){
        temp->next = head2;
    }
    else{
        temp->next = head1;
    }
    return head->next;
    // code here
}  

Node* revaltnodes(Node * head){
    Node * second,*buff;
    Node * s,*f;
    second = NULL;buff = NULL;
    s = head;f = head;
    while(f && f->next){
        f = f->next->next;
        s->next->next = buff;
        buff = s->next;
        s->next = f;
        s = f;
    }
    // print(head);
    // print(buff);
    return sortedMerge(head,buff);
    // second = head;
    // while(second!=NULL){
    //     if(buff){
    //     Node * temp = buff->next;
    //     buff->next = second->next;
    //     second->next = buff;
    //     buff = temp;
    //     }
    //     second = second->next;
    // }
}


int main() {
    int n;
    //cin>>n;
    n = 4;
    int t;
    Node * head = NULL;
    Node * temp = NULL;
    for(int i=0;i<n;i++){
        //cin>>t;
        push(temp,i);
        if(i==0){
            head = temp;
        }
    }
    print(revaltnodes(head));
}