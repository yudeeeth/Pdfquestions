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

void revaltnodes(Node * head){
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
    second = head;
    while(second!=NULL){
        if(buff){
        Node * temp = buff->next;
        buff->next = second->next;
        second->next = buff;
        buff = temp;
        }
        second = second->next;
    }
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
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
    revaltnodes(head);
    print(head);
}