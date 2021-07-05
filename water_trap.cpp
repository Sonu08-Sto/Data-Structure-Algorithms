#include<iostream>
using namespace std;

int TrapWater(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
    int res=0;
    int left[n],right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    left[i]=max(arr[i],left[i-1]);

    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    right[i]=max(arr[i],right[i+1]);

    for(int i=1;i<n-1;i++)
    res=res+(min(left[i],right[i])-arr[i]);

    return res;
    }
    return res;
}

int main()
{
    int arr[]={5,0,6,2,3};
    int n=5;
    cout<<TrapWater(arr,n);
    return 0;
}