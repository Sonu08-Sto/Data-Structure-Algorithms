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

Node *Remove(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    unordered_set<int> s;
    while(curr!=NULL){
        if(s.find(curr->data)!=s.end()){
            prev->next=curr->next;
            delete(curr);
        }
        else{
        s.insert(curr->data);
        prev=curr;
        }
        curr=prev->next;
    }
    return head;
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
        head->next->next=new Node(2);
        head->next->next->next=new Node(4);
        head=Remove(head);
        print(head);
        return 0;
}