#include<iostream>
using namespace std;

int Occ(int arr[],int n,int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;;
        if(arr[mid]>x)
        {
            h=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            if(mid==0 || arr[mid]!= arr[mid-1])
            return mid;
            else
            h=mid-1;
        }
    }
    return -1;
}

int LastOcc(int arr[],int n,int x)
{
    int l=0;
    int h=n-1;
    while(l<h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>x)
        {
            h=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            if(mid==n-1 || arr[mid] != arr[mid+1])
            return mid;
            else
            l=mid+1;
        }
    }
    return -1;
}

int CountOcc(int arr[],int n,int x)
{
    int first=Occ(arr,n,x);
    if(first==-1)
    return 0;
    else
    return (LastOcc(arr,n,x)-first+1);
}

int main()
{
    int arr[]={1,2,6,6,6,6,6,7};
    int n=8;
    cout<<Occ(arr,n,6)<<endl;
    cout<<LastOcc(arr,n,6)<<endl;
    cout<<CountOcc(arr,n,6)<<endl;
    return 0;
}