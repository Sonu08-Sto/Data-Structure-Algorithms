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
    if(a==NULL && b==NULL)return true;
    if(a==NULL || b==NULL)return false;

    return (a->key == b->key && IsIdentical(a->left,b->left) && IsIdentical(a->right,b->right));
}

bool IsSubtree(Node *root,Node *root2){
    if(root2==NULL)return true;
    if(root==NULL)return false;
    if(IsIdentical(root,root2))
    return true;
    return (IsSubtree(root->left,root2) || IsSubtree(root->right,root2));
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->right=new Node(40);
    Node *root2=new Node(12);
    root2->right=new Node(40);
    cout<<IsSubtree(root,root2);
    return 0;
}
