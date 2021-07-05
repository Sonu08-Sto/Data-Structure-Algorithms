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

int Length(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(slow==fast)
        break;
    }
    int size=1;
    fast=fast->next;
    while(slow!=fast){
        fast=fast->next;
        size++;
    }
    return size;
}

int main(){
		Node *head=new Node(1);
        head->next=new Node(2);
        head->next->next=new Node(3);
        head->next->next->next=new Node(4);
        head->next->next->next->next=head->next;

        cout<<Length(head);
        return 0;
}