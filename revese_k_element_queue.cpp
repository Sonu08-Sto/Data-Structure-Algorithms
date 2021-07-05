#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void Kreverse(queue<int> &q , int k)
{
    stack<int> s;
    for(int i=0;i<k;i++)
    {
    s.push(q.front());
    q.pop();
    }
    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++)
    {
        q.push(q.front());
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k;
    cout<<"Enter the value of K = ";
    cin>>k;
    cout<<endl;
    Kreverse(q,k);
    while(q.empty()==false)
    {
    cout<<q.front()<<" ";
    q.pop();
    }
    return 0;

}