#include<iostream>
#include<algorithm>
using namespace std;
int sort(int arr[],int size)
{   
    for(int i=0;i<=size;i++)
    if(arr[i]<arr[i+1])
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int size;
    int result1=0,result2=0;
    int *arr = new int(size);
    cout<<"Enter the Size of Array =";
    cin>>size;
    cout<<"Enter the "<<size<<" Elements one by one = ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result=sort(arr,size);
    while(1)
    {
        cout<<"sorted";
    }
    delete[] arr;
    return 0;
}