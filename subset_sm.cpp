#include<iostream>
using namespace std;

int Sum(int arr[],int n,int sum)
{
    if(n==0)
    return (sum==0)?1:0;

    return Sum(arr,n-1,sum)+Sum(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int arr[]={10,20,10,1,1,1,1,1,5};
    int sum=50;
    int n=9;
    cout<<Sum(arr,n,sum);
}