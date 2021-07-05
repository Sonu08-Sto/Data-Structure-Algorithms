#include<iostream>
using namespace std;

const int R=4;
const int C=4;

void Print(int arr[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}

void Triverse(int arr[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=i+1;j<C;j++)
        swap(arr[i][j],arr[j][i]);
    }
    for(int i=0;i<R;i++)
    {
        int low=0,high=R-1;
        while(low<high)
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }
}

int main()
{
    int arr[R][C]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};

    Print(arr);
    Triverse(arr);
    Print(arr);
    return 0;
}