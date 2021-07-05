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

Node *Convert(Node *root){
    static Node *prev=NULL;
    if(root==NULL)return root;
    Node *head=Convert(root->left);
    if(prev==NULL){head=root;}
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    Convert(root->right);
    return head;
}
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}

int main(){
    	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);
	root->right->left=new Node(30);
	root->right->right=new Node(35);

    Node *head=Convert(root);
    printlist(head);
    return 0;
}
