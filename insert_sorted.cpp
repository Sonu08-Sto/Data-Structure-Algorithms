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

Node *insert(Node *head,int pos,int x)
{
        Node *temp=new Node(x);
        if(pos==1)
        {
            temp->next=head;
            return temp;
        }
        Node *curr=head;
        for(int i=1;i<=pos-2 && curr != NULL ;i++)
        curr=curr->next;

        if(curr==NULL)
        return head;

        temp->next=curr->next;
        curr->next=temp;
        return head;
}

Node * insertS(Node *head,int x)
{
        Node *temp=new Node(x);
        if(head==NULL)
        return temp ;
        if(x<head->data)
        {
            temp->next=head;
            return temp;
        }

        Node *curr=head;
        if(curr->next!= NULL && curr->next->data < temp->data)
        {
        curr=curr->next;
        }

        temp->next=curr->next;
        curr->next=temp;
        return head;
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
    head=insertS(head,10);
    head=insertS(head,15);
    head=insertS(head,20);
    head=insertS(head,50);
    head=insertS(head,90);
    head=insertS(head,60);
    head=triverse(head);
    return 0;
}

