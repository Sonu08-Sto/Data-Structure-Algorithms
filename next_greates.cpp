#include<iostream>
#include<stack>
using namespace std;

void Previous(int arr[],int n)
{
    stack<int> s;
    s.push(arr[n-1]);
    cout<<"-1"<<" ";
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<arr[i])
        s.pop();
        int prev=(s.empty())?-1:(s.top());
        cout<<prev<<" ";
        s.push(arr[i]);
    }
}

int main()
{
    int arr[]={15,10,18,12,4,6,2,8};
    int N=8;
    Previous(arr,N);
    return 0;
}