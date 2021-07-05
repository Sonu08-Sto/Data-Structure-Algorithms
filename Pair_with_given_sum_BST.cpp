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


bool Check(Node *root,int sum){
    static unordered_set<int> s;
    if(root==NULL)return false;
    if(Check(root->left,sum)==true)return true;
    if(s.find(sum-root->key)!=s.end()) return true;
    else
    s.insert(root->key);
    return Check(root->right,sum);
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(8);  
    root->right = new Node(20);  
    root->left->left = new Node(4);  
    root->left->right = new Node(9);  
    root->right->left = new Node(11);
    root->right->right = new Node(30);  
    root->right->right->left = new Node(24);  

    int sum=33;
    cout<<Check(root,sum);       // pair( 8+25=33 ) 
          
    return 0;  
	
}