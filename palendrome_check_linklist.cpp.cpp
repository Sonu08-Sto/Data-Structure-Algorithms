#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node * Reverse(Node *head)
{
    Node *curr=head,*prev=NULL;
    while(curr != NULL){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool Palendrome(Node *head){
    if(head==NULL)
    return false;
    Node *slow=head,*fast=head;
    while(fast->next !=NULL && fast->next->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }   
    Node *rev=Reverse(slow->next);
    Node *curr=head;
    while(rev != NULL)
    {
        if(rev->data != curr->data)
        return false;

        rev=rev->next;
        curr=curr->next;
    }
    return true;
}
int main(){
    Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
    head->next->next->next=new Node(2);
    head->next->next->next->next=new Node(12);
    head->next->next->next->next->next=new Node(1);
    cout<<Palendrome(head);
    return 0;
}