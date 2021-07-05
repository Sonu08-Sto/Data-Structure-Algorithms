#include<iostream>
using namespace std;

int NormalSum(int arr[],int n)
{
    int res=arr[0];
    int maxending=arr[0];
    for(int i=1;i<n;i++)
    {
        maxending=max(maxending + arr[i],arr[i]);
        res=max(res,maxending);
    }
    return res;
}

int MaxCir(int arr[],int n)
{
    int Ksum=NormalSum(arr,n);
    int Cirsum=0;
    for(int i=0;i<n;i++)
    {
        Cirsum +=arr[i];
        arr[i]= -arr[i];
    }
    int res=Cirsum + NormalSum(arr,n);
    return max(res,Ksum);
}

int main()
{
    int arr[]={8,-4,3,-5,4};
    int n=5;
    cout<<MaxCir(arr,n);
    return 0;
}