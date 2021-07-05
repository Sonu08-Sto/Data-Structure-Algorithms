#include<iostream>

using namespace std;

void arrayend(int arr[],int n)
{
    arr[4]=n;
}

int main()
{
    int arr[5]={1,2,3,4};
    int n;
    cout<<"Enter the no you want to insert in the end = ";
    cin>>n;
    arrayend(arr,n);
    cout<<"The new array list is = ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}