#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int serch(Node *head ,int x)
{
    Node *curr=head;
    int pos=1;
    while(curr != NULL)
    {
        if(curr->data == x)
        return pos;
        else 
        {
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

int serchR(Node *head,int x)
{
    if(head=NULL)return -1;
    if(head->data==x) return 1;
    else
    {
    int res=serchR(head->next,x);
    if(res == -1) return -1;
    else 
    return res+1;
    }
}

void triverse(Node *head )
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
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(40);
    triverse(head);
    cout<<serch(head,100);
    cout<<serchR(head,20);
    return 0;
}