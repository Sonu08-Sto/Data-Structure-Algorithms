#include<iostream>
using namespace std;

void Rotate(int arr[],int n,int k)
{
    int temp[k];
    for(int i=0;i<k;i++)
    temp[i]=arr[i];

    for(int i=k;i<n;i++)
    arr[i-k]=arr[i];

    for(int i=0;i<k;i++)
    arr[n-k+i]=temp[i];

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    Rotate(arr,n,k);
    return 0;
}