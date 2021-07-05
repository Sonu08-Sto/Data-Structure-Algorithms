#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct queue
{
    Node *front,*rear;
    int sz;
    queue()
    {   
        sz=0;
        front=rear=NULL;
    }

    void push(int x)
    {
        Node *temp=new Node(x);
        if(front==NULL)
        {
        front=rear=temp;
        return ;
        }
        rear->next=temp;
        rear=temp;
        sz++;
    }

    int pop()
    {
        if(front==NULL)
        return NULL;
        int res=front->data;
        Node *temp=front;
        front=front->next;
        if(front==NULL)
        rear=NULL;
        sz--;
        delete temp;
        return res;
    }

    int peek()
    {
        return rear->data;
    }

    bool isEmpty()
    {
        return (front==NULL);
    }

    int size()
    {
        return sz+1;
    }
};

int main()
{
    queue s;
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