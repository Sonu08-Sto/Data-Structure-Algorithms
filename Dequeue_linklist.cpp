#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

struct Queue
{
    Node *front,*rear;
    int sz;
    Queue()
    {
        front=rear=NULL;
        sz=0;
    }

    void insertfront(int x)
    {
        Node *temp=new Node(x);
        if(front==NULL)
        front=rear=temp;
        temp->next=front;
        front->prev=temp;
        front=temp;
        sz++;
    }

    void insertrear(int x)
    {
        Node *temp= new Node(x);
        if(rear==NULL)
        rear=front=temp;
        temp->prev=rear;
        rear->next=temp;
        rear=temp;
        sz++;
    }

    int deletefront()
    {
        if(front==NULL)
        return NULL;
        Node *temp=front;
        front=front->next;
        front->prev=NULL;
        if(front==NULL)
        rear=NULL;

        delete temp;
        sz--;
    }

    int deleterear()
    {
        if(rear==NULL)
        return NULL;
        Node *temp=rear;
        rear=rear->prev;
        rear->next=NULL;
        delete temp;
        sz--;
    }

    int getfront()
    {
        return  front->data;
    }

    int getrear()
    {
        return rear->data;
    }
};

int main()
{
    Queue q;
    q.insertfront(10);
    q.insertfront(20);
    cout<<q.getfront()<<endl;
    q.insertrear(30);
    q.insertrear(40);
    cout<<q.getrear()<<endl;
    q.deletefront();
    cout<<q.getfront()<<endl;
    q.deleterear();
    cout<<q.getrear();
}