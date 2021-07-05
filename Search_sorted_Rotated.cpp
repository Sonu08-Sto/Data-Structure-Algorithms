#include<iostream>
using namespace std;

int Rotated(int arr[],int n,int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int  mid=(l+h)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[l]<arr[mid])
        {
            if(arr[l]<=x && arr[mid]>x)
            h=mid-1;
            else
            l=mid+1;
        }
        else
        {
            if(arr[h]>x && arr[mid]<x)
                l=mid+1;
                else
                h=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,8,9};
    int n=7;
    cout<<Rotated(arr,n,8);
    return 0;
}