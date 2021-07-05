#include<iostream>
using namespace std;

int Count(int arr[],int n,int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>x)
        h=mid-1;
        else if(arr[mid]<x)
        l=mid+1;
        else
        {
            if(mid==0 || arr[mid]!=arr[mid-1])
            return n-mid;
            else
            h=mid-1;
        }
    }
}

int main()
{
    int arr[]={0,0,0,0,1,1,1,1,1,1};
    int n=10;
    cout<<Count(arr,n,1);
    return 0;
}