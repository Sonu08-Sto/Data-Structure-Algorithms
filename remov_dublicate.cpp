#include<iostream>
using namespace std;
#define N 5

int dubli(int arr[],int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(arr[res]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
        
    }
    return res;
}

int main()
{
    int arr[]={1,1,2,2,3};
    int n=5;
    cout<<"THe array is = ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int size=dubli(arr,n);
    cout<<"The removed list is = ";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}