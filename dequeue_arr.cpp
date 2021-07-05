#include<iostream>
using namespace std;

struct dequeue
{
    int *arr;
    int front,sz,rear,cap;
    dequeue(int x)
    {
        cap=x;
        arr=new int[cap];
        front=0;
        sz=0;
    }
    
    bool isFull()
    {
        return (sz==cap);
    }

    bool isEmpty()
    {
        return (sz==0);
    }
    void insertbegin(int x)
    {
        if(isFull())
        return ;
        front=(front+cap-1)%cap;
        arr[front]=x;
        sz++;
    }

    void insertend(int x)
    {
        if(isFull())
        return ;
        int nrear=(front+sz)%cap;
        arr[nrear]=x;
        sz++;
    }

    void deleterear()
    {
        int res=arr[rear];
        sz--;
    }

    void deletefront()
    {
        front=(front+1)%cap;
        sz--;
    }

    int getfront()
    {
        return front;
    }
    int getrear()
    {
        return (front+sz-1)%cap;
    }
};

int main()
{
    dequeue q(5);
    q.insertend(10);
    q.insertbegin(20);
    q.insertbegin(30);
    q.insertend(40);
    
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    return 0;
}