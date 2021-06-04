#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node * right;
    Node * left;
    Node(int val){
        data = val;
        right= NULL;
        left = NULL;
    }
};

int count(Node* head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->right;
    }
    return c;
}

Node* make(int n,Node* &head){
    if(n<=0) return NULL;
    Node * left = make(n/2,head);
    Node* root=head;
    root->left = left;
    head= head->right;
    root->right = make(n-n/2-1,head);
    return root;
}

void push(Node* &tail,int val){
    Node * curr = new Node(val);
    tail->right = curr;
    curr->left=  tail;
    tail=tail->right;
}

Node* convert(Node * head){
    int n = count(head);
    make(n,head);
}

void print(Node * root){
    if(root==NULL) return;
    print(root->left);
    
    print(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node * tail = new Node(0);
    Node * head = tail;
    for(int i=1;i<11;i++){
        push(tail,i);
    }
    Node * root = convert(head);
    print(root);


}