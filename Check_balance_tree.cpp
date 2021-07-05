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

int Height(Node *root){
    if(root==NULL)
    return 0;
    return (max(Height(root->left),Height(root->right))+1);
}

bool Check(Node *root){
    if(root==NULL)return true;
    int ln=Height(root->left);
    int rn=Height(root->right);
    return (abs(ln-rn<=1 && Check(root->left) && Check(root->right)));
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
