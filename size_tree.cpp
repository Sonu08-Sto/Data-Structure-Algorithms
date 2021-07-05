#include<iostream>

using namespace std;

struct Node 
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key=x;
        left=NULL;
        right=NULL;
    }
};

void Inorder(Node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}

int size(Node *root)
{   
    if(root==NULL)
    return 0;
    return size(root->left)+size(root->right)+1;
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    cout<<size(root);
}