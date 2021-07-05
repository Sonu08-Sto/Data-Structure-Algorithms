#include<iostream>
using namespace std;

void Leader(int arr[],int n)
{
    int leader=arr[n-1];
    cout<<leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            leader=arr[i];
            cout<<leader<<" ";
        }
    }
}

int main()
{
    int arr[]={7,10,4,3,6,5,2};
    int n=7;
    Leader(arr,n);
}