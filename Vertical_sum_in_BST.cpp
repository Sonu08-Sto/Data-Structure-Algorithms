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

void Vsum(Node *root,map<int,int> &mp,int hp){
    if(root==NULL)return;
    Vsum(root->left,mp,hp-1);
    mp[hp] += root->key;
    return Vsum(root->right,mp,hp+1);
}

void VerticalSum(Node *root){
    map<int,int> mp;
    int hp=0;
    Vsum(root,mp,hp);
    for(auto x:mp)
    cout<<x.second<<" ";
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(5);  
    root->left->right = new Node(15);   
    
    VerticalSum(root);       // pair( 8+25=33 ) 
          
    return 0;  
	
}