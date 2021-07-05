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
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }

    temp->next=head->next;
    head->next=temp;

    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    return temp;
}

Node *deelete(Node *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    
    Node *temp=head->next;
    head->data=head->next->data;
    head->next=head->next->next;
    delete temp;
}

void triverse(Node *head)
{
    Node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr != head);
}

int main()
{
    Node *head=NULL;
    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    head=insert(head,5);
    deelete(head);
    deelete(head);
    triverse(head);
    return 0;
}