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

void Inorder(Node *root)
{
    if(root==NULL)
    return;
    stack <Node *> s;
    Node *curr=root;
    while(curr != NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;
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
    Inorder(root);
    cout<<endl;
}