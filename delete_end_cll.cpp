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

Node *deleete(Node *head,int k)
{
    if(head==NULL)
    return head;
    if(k==1)
    deelete(head);
    Node *curr=head;
    for(int i=0;i<k-2;i++)
    curr=curr->next;
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
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
    head->next->next->next->next->next=head;
    head=deleete(head,4);
    triverse(head);
    return 0;
}