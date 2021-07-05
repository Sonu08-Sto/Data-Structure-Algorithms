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
void Inorder(Node *root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->right=new Node(40);
    Mirror(root);
    Inorder(root);
    return 0;
}
