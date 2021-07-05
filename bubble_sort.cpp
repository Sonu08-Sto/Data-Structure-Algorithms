#include<iostream>
using namespace std;

void bubble(int arr[],int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false)
        break;
    }
}

int main()
{
    int arr[]={2,1,8,9,6,5,7,8};
    int N=8;
    bubble(arr,N);
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    return 0;
}