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

Node *Segregate(Node *head){
    Node *es=NULL,*Es=NULL,*os=NULL,*Os=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(es==NULL){
                es=curr;
                Es=es;
            }
            else{
                Es->next=curr;
                Es=Es->next;
            }
        }
        else{
            if(os==NULL){
                os=curr;
                Os=os;
            }
            else{
                Os->next=curr;
                Os=Os->next;
            }
        }
    }
    if(Os==NULL && es==NULL)
    return head;
    Es->next=os;
    Os->next=NULL;
    return es;
}

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
int main() 
{ 
	Node *head=new Node(17);
	head->next=new Node(15);
	head->next->next=new Node(8);
	head->next->next->next=new Node(12);
	head->next->next->next->next=new Node(10);
	printlist(head);
	head=Segregate(head);
	printlist(head);
	return 0;
} 
