#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node *insert(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;

    temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    return temp;
}

Node *deelete(Node * head)
{
    if(head== NULL)
    return NULL;
    if(head->next ==NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr=head;
    while(curr->next != NULL)
    curr=curr->next;
    curr->prev->next=NULL;
    delete curr;
    return head;
}

void triverse(Node *head)
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
    Node *head=new Node(30);
    Node *temp1=new Node(20);
    Node *temp2=new Node(10);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insert(head,40);
    
    head=deelete(head);
    triverse(head);
    return 0;
}