#include<iostream>
#include<queue>
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

void levelorder(Node *root)
{
    if(root==NULL)
    return;
    queue <Node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr=q.front();
        cout<<curr->key<<" ";
        q.pop();
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
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
    levelorder(root);
    cout<<endl;
}