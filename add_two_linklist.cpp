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

Node *Reverse(Node *head){
    Node *curr=head,*prev=NULL;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node *Addition(Node *first,Node *second){
    int s=0,c=0;
    Node *temp,*curr=NULL,*res=NULL;
    first=Reverse(first);
    second=Reverse(second);
    while(first!=NULL || second !=NULL){
        s=c + (first?first->data:0)+(second?second->data:0);
        c=(s>=10)?1:0;
        s=s%10;
        temp=new Node(s);
        if(res==NULL){ res=temp; }
        else{curr->next=temp;}
        curr=temp;
        if(first) first=first->next;
        if(second) second=second->next;
    }
    if(c>0){
        temp=new Node(c);
        curr->next=temp;
        curr=temp;
    }
    res=Reverse(res);
    return res;
}

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

int main(){
		Node *head=new Node(4);
        head->next=new Node(5);
        Node *head2=new Node(3);
        head2->next=new Node(4);
        head2->next->next=new Node(5);
        Node *res=Addition(head,head2);
        print(res);
        return 0;
}