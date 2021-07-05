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

void lengthUtil(Node *root,int &maximum,int &minimum,int curr=0){
    if (root == NULL)
        return;
    lengthUtil(root->left, maximum,
               minimum, curr - 1);
    if (minimum > curr)
        minimum = curr;
    if (maximum < curr)
        maximum = curr;
    lengthUtil(root->right, maximum,
               minimum,  curr + 1);

}

int Check(Node *root){
    if(root==NULL)return 0;
    int maximum = 0, minimum = 0;
    lengthUtil(root, maximum, minimum, 0);
    return (abs(minimum) + maximum) + 1;
}
int main(){
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    cout<<Check(root);
    return 0;
}
