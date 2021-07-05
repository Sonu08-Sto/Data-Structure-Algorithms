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
    if(root==NULL)return 0;
    int left=Solve(root->left,res);
    int right=Solve(root->right,res);
    res=max(res,root->data);
    res=max(res,root->data+left);
    res=max(res,root->data+right);
    res=max(res,root->data+right+left);
    return max(root->data,root->data+max(left,right));
}

int MaxSum(Node *root){
    int res=INT_MIN;
    int val=Solve(root,res);
    if(res==INT_MIN)
    return val;
    return res;
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->right=new Node(40);
    root->left->left=new Node(50);
    cout<<MaxSum(root);
    return 0;
}
