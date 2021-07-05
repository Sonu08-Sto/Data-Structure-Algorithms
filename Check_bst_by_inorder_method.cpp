#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left,*right;
    int lcount;
    Node(int x){
        key=x;
        left=right=NULL;
        lcount=0;
    }
};

Node *insert(Node *root,int x){
    if(root==NULL)return new Node(x);
    if(root->key>x){
    root->left=insert(root->left,x);
    root->lcount++;
    }
    else
    root->right=insert(root->right,x);

    return root;
}


bool CheckBST(Node *root){
    static int prev=INT_MIN;
    if(root==NULL)return true;
    if(CheckBST(root->left)==true)return true;
    if(root->key <=prev)return false;
    prev=root->key;
    CheckBST(root->right);
}

int main(){
    Node *root=NULL;
    int arr[]={4,10,20,40,50,60,70,80,100,120};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    root=insert(root,arr[i]); 
    
    cout<<CheckBST(root);
    return 0;
}