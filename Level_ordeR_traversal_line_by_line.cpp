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

void printLevel(Node *root){
    if(root==NULL)return ;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node * curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        else
        cout<<curr->key<<" ";
        if(curr->left!=NULL){q.push(curr->left);}
        if(curr->right!=NULL){q.push(curr->right);}
    }
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	printLevel(root);
}
