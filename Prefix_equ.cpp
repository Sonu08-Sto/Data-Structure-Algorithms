#include<iostream>
using namespace std;

bool Equ(int arr[],int n)
{
    int tsum=0;
    for(int i=0;i<n;i++)
    tsum +=arr[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum == tsum - arr[i])
        return true;
        sum += arr[i];
        tsum -= arr[i];
    }
    return false;
}

int main()
{
    int arr[]={3,4,8,-9,20,6};
    int n=6;
    cout<<Equ(arr,n);
    return 0;
}