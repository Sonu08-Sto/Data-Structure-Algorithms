#include<iostream>
using namespace std;

void count(int arr[],int n,int k)
{
   int output[n];
   int count[k];
   for(int i=0;i<k;i++)
   count[i]=0;
   for(int i=0;i<n;i++)
   count[arr[i]]++;
   for(int i=1;i<k;i++)
   count[i]=count[i-1]+count[i];
   for(int i=n-1;i>=0;i--)
   {
       output[count[arr[i]]-1]=arr[i];
       count[arr[i]]--;
   }
   for(int i=0;i<n;i++)
   arr[i]=output[i];
}   

int main()
{
    int arr[]={ 1,4,4,1,0,1};
    int N=5;
    int k=5;
    count(arr,N,k);
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    return 0;
}