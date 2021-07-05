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
    if(root==NULL)return 0;
    return (1+max(Height(root->left),Height(root->right)));
}

int Diameter(Node *root){
    if(root==NULL)return 0;
    int d1=Height(root->left)+Height(root->right)+1;
    int d2=Diameter(root->left);
    int d3=Diameter(root->right);

    return max(d1,max(d2,d3));
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->left=new Node(5);
    root->right->right=new Node(3);
    root->right->right->right=new Node(3);
    root->right->left->left=new Node(3);
    cout<<Diameter(root);
    return 0;
}
