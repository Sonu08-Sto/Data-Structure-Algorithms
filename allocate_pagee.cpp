#include<iostream>
using namespace std;

bool isfossible(int arr[],int n,int k,int mid)
{
    int req=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>mid)
        {
            req++;
            sum=arr[i];
        }
        else
        sum += arr[i];
    }
    return (req<=k);
}

int Pages(int arr[],int n,int k)
{
    int sum=0,mx=0,res=0;
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx;
    int high=sum;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(isfossible(arr,n,k,mid))
        {
            res=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return res;
}

int main()
{
    int arr[]={10,20,10,30};
    int k=2;
    int n=4;
    cout<<Pages(arr,n,k);
    return 0;
}