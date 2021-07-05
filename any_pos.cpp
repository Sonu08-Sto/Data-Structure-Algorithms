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

Node * anypos(Node * head,int n)
{
    Node *first=head;
    for(int i=0;i<=n;i++)
    {
        first=first->next;
    }
    Node *second=head;
    while(first != NULL && first->next != NULL)
    {
        second=second->next;
        first=first->next;
    }

    cout<<second->data;
}

Node *triverse(Node *head)
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
    Node *head=NULL;
    head=insert(head,1,10);
    head=insert(head,2,20);
    head=insert(head,3,30);
    head=insert(head,4,40);
    head=insert(head,5,50);
    head=insert(head,6,60);
    head=insert(head,6,60);
    triverse(head);
    anypos(head,3);
    return 0;
}

