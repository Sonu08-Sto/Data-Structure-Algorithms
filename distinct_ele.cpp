#include<iostream>

using namespace std;

int main()
{
    int size,i,j;
    int *arr=new int(size);
    cout<<"Enter the size of array=";
    cin>>size;
    cout<<"Enter the elements of array one by one=";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
        cout<<arr[i];
    }
}