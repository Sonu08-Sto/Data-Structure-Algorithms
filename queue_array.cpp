#include<iostream>

using namespace std;

struct queue
{
    int *arr;
    int front,sz,cap,rear;
    queue(int x)
    {
        cap=x;
        arr=new int[cap];
        sz=0;
        front=0;
    }

    bool isfull()
    {
        return (sz==cap);
    }

    bool isEmpty()
    {
        return (sz==0);
    }

    int getfront()
    {
        if(isEmpty())
        return -1;
        else
        return front;
    }

    int getrear()
    {
        if(isEmpty())
        return -1;
        else
        return (front+sz)%cap;
    }

    void push(int x)
    {
        if(isfull())
        return ;
        else
        rear=getrear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        sz++;
    }

    int pop()
    {
        if(isEmpty())return NULL;
        int front=(front+1)%cap;
        sz--;
        return arr[front];
    }

    int size()
    {
        return sz;
    }

    int peek()
    {
        return arr[rear];
    }
};

int main()
{
    queue s(5);
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