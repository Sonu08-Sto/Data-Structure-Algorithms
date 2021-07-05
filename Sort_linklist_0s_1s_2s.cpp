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

Node *Sort(Node *head){
    Node *ZeroD=new Node(0);
    Node *OnesD=new Node(0);
    Node *TwosD=new Node(0);
    Node *zero=ZeroD,*ones=OnesD,*twos=TwosD;

    Node *curr=head;
    while(curr!=NULL){
        if(curr->data == 0){
            zero->next=curr;
            zero=zero->next;
        }
        else if(curr->data == 1){
            ones->next=curr;
            ones=ones->next;
        }
        else{
            twos->next=curr;
            twos=twos->next;
        }
        curr=curr->next;
    }

    zero->next=(OnesD->next)?OnesD->next:TwosD->next;
    ones->next=TwosD->next;
    twos->next=NULL;

    head=ZeroD->next;

    delete(ZeroD);
    delete(OnesD);
    delete(TwosD);

    return head;
}

Node *Addition(Node *first,Node *second){
    
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
        head->next=new Node(0);
        head->next->next=new Node(1);
        head->next->next->next=new Node(0);
        head->next->next->next->next=new Node(2);
        head->next->next->next->next->next=new Node(2);
        head=Sort(head);
        print(head);
        return 0;
}