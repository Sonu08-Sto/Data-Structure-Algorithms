#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

int Solve(Node *root,int &res){
    if(root==NULL)return INT_MAX;
    if(root->left==NULL && root->right==NULL)return root->data;
    int val=min(Solve(root->left,res),Solve(root->right,res));

    res=max(res,root->data-val);
    return min(root->data,val);
}

int MaxSum(Node *root){
    int res=INT_MIN;
    Solve(root,res);
    return res;
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->right=new Node(7);
    
    cout<<MaxSum(root);
    return 0;
}
