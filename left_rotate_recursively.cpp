#include<iostream>
using namespace std;

void Reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void Recursively(int arr[],int n,int d)
{
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int k=2;
    int n=5;
    Recursively(arr,n,k);
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}