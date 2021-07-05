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

bool Reverse(Node *head){
    Node *slow=head,*fast=head;
    while(fast != NULL && fast->next != NULL){
        slow= slow->next;
        fast=fast->next->next;
        if(slow==fast)
        break;
    }
    if(slow!=fast)
    return false;
    slow=head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
    return true;
}

int main(){
    Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    head->next->next->next=new Node(40);
	head->next->next->next->next=head->next;
    if(Reverse(head))
    cout<<"loop Removed";
    else
    cout<<"loop Present";
    return 0;
}