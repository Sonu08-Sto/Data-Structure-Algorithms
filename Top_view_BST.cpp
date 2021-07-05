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

void topView(Node *root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        Node *curr=p.first;
        int hp=p.second;
        if(mp.find(hp)==mp.end())
        mp[hp]=curr->key;
        q.pop();
        if(curr->left!=NULL)
        q.push({curr->left,hp-1});
        if(curr->right!=NULL)
        q.push({curr->right,hp+1});
    }

    for(auto x:mp){
        cout<<x.second<<" ";
    }
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
    topView(root);
          
    return 0;   
	
}