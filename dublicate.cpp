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

void dublicate(Node *head)
{
    Node *curr=head;
    while(curr != NULL && curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
        curr=curr->next;
    }
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
    head=insert(head,3,20);
    head=insert(head,4,20);
    head=insert(head,5,30);
    head=insert(head,6,40);
    head=insert(head,6,40);
    triverse(head);
    dublicate(head);
    triverse(head);
    return 0;
}

