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

Node *insert(Node *head,int pos,int data)
{
    Node *temp=new Node(data);
    if(pos==1)
    {
        temp->next=head;
        head->prev=temp;
        return temp;
    }

    Node *curr=head;
    for(int i=0;i<pos-2;i++)
    curr=curr->next;

    temp->next=curr->next;
    temp->prev=curr;
    curr->next=temp;
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
    cout<<endl;
}

int main()
{
    Node *head=new Node(10);
    Node *temp=new Node(20);
    Node *temp1=new Node(30);
    Node *temp2=new Node(40);

    head->next=temp;
    temp->prev=head;
    temp->next=temp1;
    temp1->prev=temp;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insert(head,3,15);
    triverse(head);
    return 0;
}