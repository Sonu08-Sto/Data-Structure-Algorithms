#include<iostream>
#include<stack>
using namespace std;

struct Node
{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

void  Spiral(Node *root){
    stack<Node *> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *curr=s1.top();
            s1.pop();
            cout<<curr->key<<" ";
            if(curr->left!=NULL){s2.push(curr->left);}
            if(curr->right!=NULL){s2.push(curr->right);}
        }
        while(!s2.empty()){
            Node *curr=s2.top();
            s2.pop();
            cout<<curr->key<<" ";
            if(curr->right!=NULL){s1.push(curr->right);}
            if(curr->left!=NULL){s1.push(curr->left);}
        }
    }
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(70);
    root->right->right=new Node(80);
    Spiral(root);
    return 0;
}