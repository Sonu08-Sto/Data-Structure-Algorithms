#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node *insert(Node *head,int x)
{
        Node *temp=new Node(x);
        temp->next=head;
        return temp;

}

Node *triverse(Node *head)
{
    Node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    Node *head=NULL;
    head=insert(head,60);
    head=insert(head,50);
    head=insert(head,40);
    head=insert(head,30);
    head=insert(head,20);
    head=insert(head,10);
    triverse(head);
    return 0;
}

