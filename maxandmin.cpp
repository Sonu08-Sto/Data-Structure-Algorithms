#include<iostream>

using namespace std;

int min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

int max(int arr[],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int main()
{
     int size ;
     int *arr=new int(size);
     cout<<"Enter the size of arrar = ";
     cin>>size;
     cout<<"Enter the elements of array = ";
     for(int i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     int a=min(arr,size);
     int b=max(arr,size);
     cout<<"The minimum in the array is = "<<a<<endl;
     cout<<"The maxmium in the array is = "<<b<<endl;
     return 0;
}