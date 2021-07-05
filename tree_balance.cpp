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

int Balance(Node *root,bool &ans){
    if(root==NULL)return 0;
    int lh=Balance(root->left,ans);
    int rh=Balance(root->right,ans);
    if(abs(lh-rh)>1)return ans=false;
    else return max(lh,rh)+1;
}

bool Check(Node *root){
    bool check=true;
    return Balance(root,check);
}

int main(){
    	Node *root=new Node(10);
	root->left=new Node(5);
	root->left->right=new Node(5);
	root->left->left=new Node(5);
	root->right=new Node(20);
	root->right->right=new Node(20);
	root->right->right->right=new Node(20);
    if(Check(root))
	    cout<<"Balanced";
	else
	    cout<<"Not Balanced";
    return 0;
}
