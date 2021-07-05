#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct Stack
{
    Node *head;
    int si;
    Stack()
    {
        head=NULL;
        si=0;
    }

    void push(int data)
    {
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
        si++;
    }

    int pop()
    {
        if(head==NULL)
        return NULL;

        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete temp;
        si--;
        return res;
    }

    bool isEmpty()
    {
        return (head==NULL);
    }

    int peek()
    {
        return head->data;
    }

    int size()
    {
        return si;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
}