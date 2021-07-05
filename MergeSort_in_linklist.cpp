#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void print(Node *head){
    Node *curr=head;
    while(curr!= NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
void BreakList(Node *head,Node **a,Node **b){
    Node *slow;
    Node *fast;
        slow=head;
        fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){slow=slow->next; fast=fast->next;}
        }
        *a=head;
        *b=slow->next;
        slow->next=NULL;
}
Node * Merge(Node *a,Node *b){
    if(a==NULL)return b;
    if(b==NULL)return a;
     struct Node *head = NULL; 
    struct Node *tail = NULL;
    if(a->data<=b->data){
        head=tail=a;a=a->next;
    }
    else{
        head=tail=b;b=b->next;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<=b->data){
            tail->next=a;tail=a;a=a->next;
        }
        else{
            tail->next=b;tail=b;b=b->next;
        }
    }
    if(a==NULL)tail->next=b;
    else
    tail->next=a;
    return head;
}

Node *MergeSort(Node *head){
    Node *a;
    Node *b;
    if(head==NULL || head->next==NULL)
    return head;
    BreakList(head,&a,&b);
    a=MergeSort(a);
    b=MergeSort(b);
    return Merge(a,b);
}

int main(){
		Node *head=new Node(1);
        head->next=new Node(4);
        head->next->next=new Node(5);
        head->next->next->next=new Node(3);
        head->next->next->next->next=new Node(3);
        print(head);
        head=MergeSort(head);
        print(head);
        return 0;
}