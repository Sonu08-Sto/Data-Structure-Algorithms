#include<iostream>
#include<queue>
using namespace std;

void KthElement(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> p(arr,arr+k);
    for(int i=k;i<n;i++)
    {
        if(arr[i]>p.top())
        {
            p.pop();
            p.push(arr[i]);
        }
    }
    while(p.empty()==false)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}

int main()
{
    int arr[]={5,15,10,20,8};
    int N=5;
    int k=3;
    KthElement(arr,N,k);
    return 0;
}