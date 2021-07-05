#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       int j;
       int min=i;
       for(j=i+1;j<n;j++)
       {
        if(arr[j]<arr[min])
        {
        min=j;
        }
       }
        swap(arr[i],arr[min]);
   }
}   

int main()
{
    int arr[]={2,1,8,9,6,5,7,8};
    int N=8;
    selectionSort(arr,N);
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    return 0;
}