#include<iostream>
#define R 3
#define C 3
using namespace std;

void multi(int arr[R][C],int arr1[R][C],int arr2[R][C])
{
    int i,j,k;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            arr2[i][j]=0;
            for(k=0;k<R;k++)
            {
                arr2[i][j]+=arr1[i][k]*arr1[k][j];
            }
        }
    }
}

int main()
{
    int arr[R][C];
    int arr1[R][C];
    int arr2[R][C];
    cout<<"Enter the element of first 2d array one by one = ";
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>arr[i][j];

    cout<<"Enter the element of 2d array one by one = ";
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>arr1[i][j];

    multi(arr,arr1,arr2);
    cout<<"Multip. of the  array is = "<<endl;
    for(int i=0;i<R;i++)
    {
    for(int j=0;j<C;j++)
    {
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    }
}
