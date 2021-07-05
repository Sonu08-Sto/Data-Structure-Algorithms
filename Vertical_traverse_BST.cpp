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

void VerticalTraverse(Node *root){
    map<int,vector<int>> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        Node *curr=p.first;
        int hp=p.second;
        q.pop();
        mp[hp].push_back(curr->key);
        if(curr->left!=NULL)
        q.push({curr->left,hp-1});
        if(curr->right!=NULL)
        q.push({curr->right,hp+1});
    }

    for(auto x:mp){
        for(int y:x.second)
        cout<<y<<" ";
        cout<<endl;
    }
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(5);  
    root->left->right = new Node(15);   
    
    VerticalTraverse(root);       
          
    return 0;  
	
}