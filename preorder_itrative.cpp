#include<iostream>
#include<stack>
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

void Preorder(Node *root)
{
    if(root==NULL)
    return;
    stack <Node *> s;
    s.push(root);
    while(s.empty()==false)
    {
        Node *curr=s.top();
        cout<<curr->key<<" ";
        s.pop();
        if(curr->right != NULL )
        s.push(curr->right);
        if(curr->left != NULL )
        s.push(curr->left);
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
    Preorder(root);
    cout<<endl;
}