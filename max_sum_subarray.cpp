#include<iostream>
using namespace std;

int MaxSum(int arr[],int n)
{
    int res=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(maxend+arr[i],arr[i]);
        res=max(res,maxend);
    }
    return res;
}

int main()
{
    int arr[]={-3,8,-2,4,-5,6};
    int n=6;
    cout<<MaxSum(arr,n);
    return 0;
}