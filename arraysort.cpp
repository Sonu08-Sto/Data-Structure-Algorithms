#include<iostream>

using namespace std;

bool sort(int arr[],int size)
{
    if(size==0 || size==1)
        {
            return false;
        }
    for(int i=0;i<size;i++)
    {
        if(arr[i+1]>arr[i])
        {
            return true;
        }
        
        else 
        return false;
    }
}

int main()
{
    int size;
    int *arr=new int(size);
    cout<<"Enter the size of array=";
    cin>>size;
    cout<<"Enter the elements of array one by one=";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int c=sort(arr,size);
    if(c==true)
    {
        cout<<"Sorted";
    }
    else 
    cout<<"Not sorted";
}