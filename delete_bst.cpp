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
    Node *temp=new Node(data);
    Node *parent=NULL;
    Node *curr=root;
    while(curr != NULL)
    {
        parent=curr;
        if(curr->key > data)
        curr=curr->left;
        else if(curr->key <data)
        curr=curr->right;
        else 
        return root;
   }
    if(parent==NULL)
    return temp;
    if(parent->key > data)
    parent->left=temp;
    else
    parent->right=temp;

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

Node *getsucc(Node *root)
{
    Node *curr=root->right;
    while(curr != NULL && curr->left != NULL)
    curr=curr->left;
    return curr;
}

Node *deelete(Node *root,int x)
{
    if(root==NULL)
    return root;
    if(root->key > x)
    root->left=deelete(root->left,x);
    else if(root->key < x)
    root->right=deelete(root->right,x);
    else
    {
        if(root->left == NULL)
        {
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ=getsucc(root);
            root->key=succ->key;
            root->right=deelete(root->right,succ->key);
        }
    }
    return root;
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
    cout<<endl;
    deelete(root,40);
    Inorder(root);
    
}