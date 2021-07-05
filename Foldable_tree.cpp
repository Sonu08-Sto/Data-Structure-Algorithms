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

bool IsIdentical(Node *a,Node *b){
    if(a==NULL && b==NULL)return true;  //   if(a==NULL || b==NULL)return false;
    if(a!=NULL && b!=NULL && IsIdentical(a->left,b->left) && IsIdentical(a->right,b->right))
    return true;

    return false;
}

void Mirror(Node *root){
    if(root==NULL)return;
    else{
        Node *temp;
        Mirror(root->left);
        Mirror(root->right);
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
}

bool Foldable(Node *root){
    bool res;
    if(root==NULL)return true;
    Mirror(root->left);
    res=IsIdentical(root->left,root->right);
    Mirror(root->left);
    return res;
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->right=new Node(40);
    root->left->left=new Node(50);
    cout<<Foldable(root);
    return 0;
}
