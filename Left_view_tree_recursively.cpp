#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};
int maxlevel=0;
void PrintLe(Node *root,int n){
    if(root==NULL)return;
    if(maxlevel<n){
        cout<<root->key<<" ";
        maxlevel=n;
    }    
    PrintLe(root->left,n+1);
    PrintLe(root->right,n+1);
}
void printLeft(Node *root){
    PrintLe(root,1);
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	printLeft(root);
}
