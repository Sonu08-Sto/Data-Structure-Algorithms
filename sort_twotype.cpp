#include<iostream>
using namespace std;

void Inverse(int arr[],int n)
{
    int low=-1;
    int high=n;
    while(true)
    {
        do
        {
            low++;
        } while (arr[low]<0);
        do
        {
            high--;
        } while (arr[high]>0);
        if(low>=high)
        return;
        else
        swap(arr[low],arr[high]);
    }
}

int main()
{
    int arr[]={15,-3,-2,18};
    int n=4;
    Inverse(arr,n);
    for(int x: arr)
    cout<<x<<" ";
    return 0;
}