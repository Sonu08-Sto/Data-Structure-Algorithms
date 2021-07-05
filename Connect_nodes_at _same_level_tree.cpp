#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct Node
{
    int key;
    Node *left,*right,*next;
    Node(int x){
        key=x;
        left=right=next=NULL;
    }
};

void Connect(Node *root){
    if(root==NULL)return;
    queue<Node *> q;
    q.push(root);

    Node *prev= NULL,*end=root,*nextend;
    while (!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
            nextend=temp->left;
        }
        if(temp->right){
            q.push(temp->right);
            nextend=temp->right;
        }
        if(prev){
            prev->next=temp;
        }
        if(temp==end){
            temp->next=NULL;
            prev=NULL;
            end=nextend;
        }
        else
        prev=temp;
    }   
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->right=new Node(40);
    root->left->left=new Node(50);
    return 0;
}
