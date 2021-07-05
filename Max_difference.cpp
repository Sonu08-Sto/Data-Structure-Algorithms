#include<iostream>
using namespace std;

int Maximum(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int mini=arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-mini);
        mini=min(mini,arr[j]);
    }
    return res;
}


int main()
{
    int arr[]={2,3,10,6,4,8,1};
    int n=7;
    cout<<Maximum(arr,n);
    return 0;
}