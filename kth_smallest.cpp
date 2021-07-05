#include<iostream>
using namespace std;

int Partition(int arr[],int low,int high)
{
    int pivot=high;
    int j=low-1;
    for(int i=0;i<=high-1;i++)
    {
        if(arr[i]<pivot)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j+1],arr[high]);
    return j+1;
}

int Inverse(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int p=Partition(arr,low,high);
        if(p == k-1 )
        return arr[p];
        else if(p > k-1)
        high=p-1;
        else
        low=p+1;
    }
}

int main()
{
    int arr[]={2,4,1,3,5,10};
    int n=6;
    int k=2;
    cout<<Inverse(arr,n,k);
    return 0;
}