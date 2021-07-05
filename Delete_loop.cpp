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
    Node *temp=new Node(0);
    Node *curr=head;
    while(curr != NULL){
        if(curr->next==NULL)
        return false;
        if(curr->next==temp)
        return true;
        Node *curr_new=curr->next;
        curr->next=temp;
        curr=curr_new;
    }
    return false;
}

int main(){
    Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=head->next;
    if(Reverse(head))
    cout<<"Present";
    else
    cout<<"Not Loop";
    return 0;
}