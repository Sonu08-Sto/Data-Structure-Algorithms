#include<iostream>

using namespace std;

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
    int sum=0;
     for(int i=0;i<size;i++)
     sum+=arr[i];
     cout<<"Sum = "<<sum;
     return 0;
}