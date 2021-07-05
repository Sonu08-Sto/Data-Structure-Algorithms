#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int x,int l,int h)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

int Sear(int arr[],int x)
{
    int i=1;
    if(arr[0]==x)
    return 0;
    while(arr[i]<x)
    i=i*2;
    if(arr[i]==x)
    return i;
    return BinarySearch(arr,x,(i/2)+1 ,i-1);
}

int main()
{
    int arr[]={1,10,15,17,20,40,80,100,200,250,1400,INT_MAX};
    cout<<Sear(arr,100);
    return 0;
}