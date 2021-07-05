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
const int EMPTY=-1;
void serialize(Node *root, vector<int> &arr){
   if(root==NULL){
       arr.push_back(EMPTY);
       return;
   }
    arr.push_back(root->key);
    serialize(root->left,arr);
    serialize(root->right,arr);
}  

Node * Deserialize(vector<int> &arr,int &index){
    if(index==arr.size())return NULL;
    int val=arr[index];
    index++;

    if(val==EMPTY)return NULL;
    Node *root=new Node(val);
    root->left=Deserialize(arr,index);
    root->right=Deserialize(arr,index);
    return root;
}
void Inorder(Node *root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	
	vector<int> arr;
	serialize(root,arr);
	for (int x : arr) {
	    cout<<x<<" ";
	}
    cout<<endl;
    int index=0;
    Node *root2=Deserialize(arr,index);
    Inorder(root2);
    return 0;
}