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

bool Solve(Node *root,int min,int max){
    if(root==NULL)return true;
    return (root->key > min && root->key <max && Solve(root->left,min,root->key) && Solve(root->right,root->key,max));
}

bool CheckBST(Node *root){
    int min=INT_MIN;
    int max=INT_MAX;

    return Solve(root,min,max);
}

int main(){
    int arr[]={4,10,20,40,50,60,70,80,100,120};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    root=insert(root,arr[i]); 
    
    cout<<CheckBST(root);
    return 0;
}