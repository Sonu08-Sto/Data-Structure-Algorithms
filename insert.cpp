#include<iostream>

using namespace std;

void arrayend(int arr[],int n,int pos)
{
    for(int i=4;i>=pos-1;i--)
    arr[i+1]=arr[i];
    arr[pos-1]=n;
}

int main()
{
    int arr[]={1,2,3,4};
    int n,pos;
    cout<<"Enter the no and position you want to insert  = ";
    cin>>n>>pos;
    arrayend(arr,n,pos);
    cout<<"The new array list is = ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}