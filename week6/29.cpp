#include<iostream>
#include<bits/stdc++.h>

using  namespace std;

void swap(Node * root){
    Node * tmep = root->left;
    root->left = root->right;
    root->right = temp;
}

bool isomorphic(Node* root1, Node* root2){
    queue<Node*> t1,t2;
    t1.push(root1);
    t2.push(root2);
    while(!t1.empty()&&!t2.empty()){
        Node * te1 = t1.front();
        Node * te2 = t2.front();
        t1.pop();
        t2.pop();
        if(te1->data!=te2->data) return false;
        if(te1->left!=NULL ){
            if(te2->left==NULL) swap(te2);
            if(te2->left==NULL|| te2->left->data!=te1->left->data) return false;
            t1.push(te1->left);
            t2.push(te2->left);
            if(te1->right!=NULL && te2->right!=NULL){
                t1.push(te1->right);
                t2.push(te2->right);
            }
            if(te1->right!=NULL ^ te2->right!=NULL){
                return false;
            }
        }
        else if(te1->right!=NULL){
            if(te2->right==NULL) swap(te2);
            if(te2->right==NULL|| te2->right->data!=te1->right->data) return false;
            t1.push(te1->right);
            t2.push(te2->right);
            if(te1->left!=NULL && te2->left!=NULL){
                t1.push(te1->left);
                t2.push(te2->left);
            }
            if(te1->left!=NULL ^ te2->left!=NULL){
                return false;
            }
        }
    }
    return true;
}

int main(){

}