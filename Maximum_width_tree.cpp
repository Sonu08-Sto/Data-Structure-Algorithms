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

int Maxlenght(Node *root){
    if(root==NULL)return 0;
    int res=0;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            if(curr->left!=NULL){q.push(curr->left);}
            if(curr->right!=NULL){q.push(curr->right);}
        }
    }
    return res;
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->left->left=new Node(5);
    root->left->right=new Node(3);
    root->right->right=new Node(14);
    root->right->left=new Node(17);

    cout<<Maxlenght(root);
    return 0;
}
