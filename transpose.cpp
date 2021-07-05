#include<iostream>
#define R 3
#define C 3
using namespace std;

void transpose(int arr[R][C],int arr1[R][C])
{
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    arr1[i][j]=arr[j][i];
}

int main()
{
    int arr[R][C];
    int arr1[R][C];
    cout<<"Enter the element of 2d array one by one = ";
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>arr[i][j];

    transpose(arr,arr1);
    cout<<"Transpose array is = "<<endl;
    for(int i=0;i<R;i++)
    {
    for(int j=0;j<C;j++)
    {
        cout<<arr1[i][j];
    }
    cout<<endl;
    }
}