#include<bits/stdc++.h>
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

bool Check(Node *root){
    int sum=0;
    if(root==NULL)
    return true;
    if(root->left==NULL || root->right==NULL)
    return true;
    if(root->left!=NULL){sum+=root->left->key;}
    if(root->right!=NULL){sum+=root->right->key;}
    return (sum==root->key && Check(root->left) && Check(root->right));
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->left->left=new Node(5);
    root->left->right=new Node(3);
    cout<<Check(root);
    return 0;
}
