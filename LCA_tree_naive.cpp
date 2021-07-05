#include <bits/stdc++.h>
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

bool findpath(Node *root,vector<Node *> &v,int n){
    if(root==NULL)return false;
    v.push_back(root);
    if(root->key==n)return true;
    if(findpath(root->left,v,n) || findpath(root->right,v,n))
    return true;
    v.pop_back();
    return false;
}

Node *lca(Node *root, int n1, int n2){
    vector<Node *>path1,path2;
    if(findpath(root,path1,n1)==false || findpath(root,path2,n2)==false)
    return NULL;
    for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++){
        if(path1[i+1]!=path2[i+1])
        return path1[i];
    }
    return NULL;
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	int n1=20,n2=50;
	
	Node *ans=lca(root,n1,n2);
	cout<<"LCA: "<<ans->key;
}