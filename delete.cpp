#include<iostream>

using namespace std;

void arrayend(int arr[],int pos)
{
    for(int i=pos;i<3;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[3]=0;
}

int main()
{
    int arr[]={1,2,3,4};
    int n,pos;
    cout<<"Enter the no and position you want to insert  = ";
    cin>>pos;
    arrayend(arr,pos);
    cout<<"The new array list is = ";
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}