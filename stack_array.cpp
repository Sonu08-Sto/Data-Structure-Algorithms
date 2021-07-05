#include<iostream>
using namespace std;

struct stack
{
    int *arr;
    int cap,top;
    stack(int x)
    {
        cap=x;
        arr=new int[cap];
        top=-1;
    }

    void push(int x)
    {
        if(top==cap)
        {
            cout<<"Over flow "<<" "<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    int pop()
    {
        if(top== -1)
        {
        cout<<"Underflow  "<<endl;
        return NULL;
        }
        int res=arr[top];
        top--;
        return res;
    }

    int peek()
    {
        return arr[top];
    }

    bool isEmpty()
    {
        return (top==-1);
    }

    int size()
    {
        return top+1;
    }
};

int main()
{
    stack s(5);
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