#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left,*right;
    Node(int x)
    {
        key=x;
        left=right=NULL;
    }
};

bool serch(Node *root,int x)
{
    while(root != NULL)
    {
        if(root->key==x)
        return true;
        else if(root->key > x)
        root=root->left;
        else
        root=root->right;
    }
    return false;
}

Node * Insert(Node *root,int data)
{
    
    if(root == NULL)
    return new Node(data);
    else if(root->key > data)
    root->left=Insert(root->left,data);
    else
    root->right=Insert(root->right,data);
    return root;
}

void Inorder(Node *root)
{
    if(root != NULL)
    {
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}

int main()
{
    Node *root=NULL;
    root=Insert(root,10);
    Insert(root,20);
    Insert(root,30);
    Insert(root,40);
    Insert(root,50);
    Inorder(root);
    cout<<serch(root,400);
}