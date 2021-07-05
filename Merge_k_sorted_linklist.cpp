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

Node * Merge(Node *a,Node *b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    Node *head=NULL,*tail=NULL;
    if(a->data <= b->data ){
            head=tail=a;
            a=a->next;
        }
        else{
            head=tail=b;
            b=b->next;
        }
    while(a!=NULL && b!=NULL){
        if(a->data <= b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
        if(a==NULL) tail->next=b;
        else
        tail->next=a;
    }
    return head;
}

Node *mergeKLists(Node *arr[],int k){
    int last=k-1;
    while(last!=0)
    {
        int i=0,j=last;
        if(i<j){
            arr[i]=Merge(arr[i],arr[j]);
            i++;
            j--;
            if(i>=j)
            last=j;
        }
    }
    return arr[0];
}

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    int k = 3;
    int n = 4; 

    Node* arr[k];

    arr[0] = new  Node(1);
    arr[0]->next = new Node(3);
    arr[0]->next->next = new Node(5);
    arr[0]->next->next->next = new Node(7);

    arr[1] = new Node(2);
    arr[1]->next = new Node(4);
    arr[1]->next->next = new Node(6);
    arr[1]->next->next->next = new Node(8);

    arr[2] = new Node(0);
    arr[2]->next = new Node(9);
    arr[2]->next->next = new Node(10);
    arr[2]->next->next->next = new Node(11);

    Node* head = mergeKLists(arr, k);

    print(head);

    return 0;
}
