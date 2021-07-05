#include<iostream>
using namespace std;

int Peak(int arr[],int n)
{
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        int mid=(l+h)/2;
        if(mid==0 || arr[mid]>arr[mid-1] && mid==n-1 || arr[mid]>arr[mid+1])
        return arr[mid];
        else if (mid==n-1 || arr[mid]<arr[mid+1])
        l=mid+1;
        else
        h=mid-1;
    }
    return -1;
}

int main()
{
    int arr[]={5,10,14,15,7};
    int n=5;
    cout<<Peak(arr,n);
    return 0;
}