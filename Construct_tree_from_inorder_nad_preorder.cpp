#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}  

int preIndex=0;
Node *cTree(int in[],int pre[],int is,int ie){
    if(is>ie)return NULL;
    Node *root=new Node(pre[preIndex++]);
    int index;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->key){
            index=i;
            break;
        }
    }
    root->left=cTree(in,pre,is,index-1);
    root->right=cTree(in,pre,index+1,ie);
    return root;
}

int main() {
	
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	Node *root=cTree(in, pre, 0,4);
	inorder(root);
}