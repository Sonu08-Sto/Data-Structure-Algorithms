#include<iostream>
using namespace std;

void Rotate(int arr[],int n)
{
   int count=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i] != 0)
       {
           swap(arr[i],arr[count]);
           count++;
       }
   } 
}

int main()
{
    int arr[]={10,8,0,0,12,0};
    int n=6;
    Rotate(arr,n);
    for(int x:arr)
    cout<<x<<" ";
}