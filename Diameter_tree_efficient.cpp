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

int res=0;
int Diameter(Node *root){
    if(root==NULL)return 0;
    int lh=Diameter(root->left);
    int rh=Diameter(root->right);
    res=max(res,lh+rh+1);
    return (max(lh,rh)+1);
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->left=new Node(5);
    root->right->right=new Node(3);
    root->right->right->right=new Node(3);
    root->right->left->left=new Node(3);
    Diameter(root);
    cout<<res;
    return 0;
}
