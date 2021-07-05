#include<iostream>
using namespace std;

int sum[1000];

void Prefix(int arr[],int n)
{   
    sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=arr[i]+sum[i-1];
    }
}

int GetSum(int arr[],int l,int h)
{
    if(l != 0)
    return sum[h]-sum[l-1];
    else
    return sum[h];
}

int main()
{
    int arr[]={2,3,4,5,6,7,8};
    int n=7;
    Prefix(arr,n);
    cout<<GetSum(sum,1,3);

}