#include<iostream>
#include<unordered_set>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void ReverseKth(Node **head,int k){
    if(k==0)
    return ;
    int count=1;
    Node *curr=*head;
    while(curr!=NULL && count<k){ curr=curr->next; count++; }
    Node *kthNode=curr;
    while(curr!=NULL){curr=curr->next;}
    curr->next=*head;
    *head=kthNode->next;
    kthNode->next=NULL;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

int main(){
		Node *head=new Node(1);
        head->next=new Node(2);
        head->next->next=new Node(3);
        head->next->next->next=new Node(4);

        ReverseKth(&head,2);
        print(head);
        return 0;
}