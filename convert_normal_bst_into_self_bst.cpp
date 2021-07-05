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

void InorderInsert(Node *root,vector<Node *> &arr){
    if(root!=NULL){
        InorderInsert(root->left,arr);
        arr.push_back(root);
        InorderInsert(root->right,arr);
    }
}

Node * ConstructBST(vector<Node *> arr,int start,int end){
    if(start> end)return NULL;

    int mid=(start+end)/2;
    Node *root=arr[mid];

    root->left=ConstructBST(arr,start,mid-1);
    root->right=ConstructBST(arr,mid+1,end);

    return root;
}

Node *Convert(Node *root,int n){

    vector<Node *> arr;         
    InorderInsert(root,arr);

    return ConstructBST(arr,0,n-1);        //starting and ending index
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main(){
    Node *root=new Node(7);
    root->left=new Node(6);
    root->left->left=new Node(5);

    Node *new_root=Convert(root,3);             // Size of tree
    inorder(new_root);
    return 0;
}