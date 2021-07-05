#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int arr[7]={7,6,5,4,3,2,1};
    priority_queue<int> p(arr,arr+7);
    for(int i=7-1;i>=0;i--)
    {
        arr[i]=p.top();
        p.pop();
    }
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    return 0;
}