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

Node *Reverse(Node *head,int k){
    Node *prevNode=NULL,*curr=head;
    bool visited=true;
    while(curr != NULL){
        Node *first=curr,*prev=NULL;
         int count =0;
        while(curr != NULL && count <k){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(visited){ head=prev; visited=false; }
        else{ prevNode->next = prev; }
        prevNode=first;
    }
    return head;
}

void Print(Node *head){
    Node *curr=head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head->next->next->next->next->next=new Node(60);
	head->next->next->next->next->next->next=new Node(70);
    head=Reverse(head,3);
    Print(head);
    return 0;
}