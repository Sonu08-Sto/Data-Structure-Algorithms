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

void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        Inorder(root->left);
        Inorder(root->right);
    }
}

void Postorder(Node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        Inorder(root->right);
        cout<<root->key<<" ";
    }
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<endl;
    preorder(root);
    cout<<endl;
    Postorder(root);
}