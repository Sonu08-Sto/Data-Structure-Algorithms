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

void triverse(Node *head)
{
    Node *curr=head;
    int count=0;
    do
    {
        cout<<curr->data<<" ";
        count++;
        curr=curr->next;
    }while(curr != head);
    cout<<endl;
    cout<<count;
}

void checkk(Node *head)
{
    Node *curr=head;
    while(curr->next != head)
    curr=curr->next;

    if(curr->next = head)
    cout<<"circular";
    else if(curr->next==NULL)
    cout<<"Not circular";
}

int main()
{
    Node *head=new Node(40);
    head->next=new Node(30);
    head->next->next=new Node(20);
    head->next->next->next=new Node(10);
    
    triverse(head);
    checkk(head);

    return 0;
}