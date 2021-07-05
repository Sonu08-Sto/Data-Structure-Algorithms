#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
       int key=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;
   }
}   

int main()
{
    int arr[]={2,1,8,9,6,5,7,8};
    int N=8;
    insertionSort(arr,N);
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    return 0;
}