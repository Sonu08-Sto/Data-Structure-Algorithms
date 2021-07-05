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

void Serialize(Node *root,vector<int> &v){
    static int EMPTY=-1;
    if(root==NULL){
        v.push_back(EMPTY);
        return ;
    }
    v.push_back(root->key);
    Serialize(root->left,v);
    Serialize(root->right,v);
}
 
int main() {
	Node *root=new Node(10);
	root->left=new Node(20);
    root->right=new Node(30);
    vector<int> v;
    Serialize(root,v);
    for(auto x:v)
    cout<<x<<" ";
    return 0; 
}