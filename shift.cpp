#include<iostream>

using namespace std;

void shift(int arr[],int size,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d-1;i<=0;i--)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }

}

int main()
{
     int size ;
     int d;
     int *arr=new int(size);
     cout<<"Enter the size of arrar = ";
     cin>>size;
     cout<<"Enter the elements of array = ";
     for(int i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     shift(arr,size,d);
     cout<<"Array new is = ";
     for(int i=0;i<size;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
}