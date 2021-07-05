#include<iostream>
#define N 3
using namespace std;

void swap(int arr[][N])
{
    int temp;
    for(int i=0;i<N;i++)
    {
    temp=arr[i][0];
    arr[i][0]=arr[i][N-1];
    arr[i][N-1]=temp;
    }
}

int main()
{
    int arr[N][N];
    cout<<"Enter the elemensts of arrray one by one=";
    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    cin>>arr[i][j];
    swap(arr);
    cout<<"The swap array are = "<<endl;
    for(int i=0;i<N;i++)
    {
    for(int j=0;j<N;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}