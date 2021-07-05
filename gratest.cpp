#include<iostream>
using namespace std;

int closest(int arr[],int size,int n)
{
    int m=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>n && m<arr[i])
        {
            m=arr[i];
        }
    }
    return m;
}

int main()
{
    int size;
    cout<<"Enter the size of arrya = ";
    cin>>size;
    cout<<endl;
    int *arr = new int(size);
    cout<<"Enter the elements of array = ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int number;
    cout<<"Enter the number = ";
    cin>>number;
    cout<<closest(arr,size,number);
    return 0;
}