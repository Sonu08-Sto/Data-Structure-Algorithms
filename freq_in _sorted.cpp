#include<iostream>
using namespace std;

void Freq(int arr[],int n)
{
    int frea=1;
    int i=1;
    while(n>i)
    {
        while ((n>i) && arr[i]==arr[i-1])
        {
            frea++;
            i++;
        }
        cout<<arr[i-1]<<" "<<frea<<endl;
        i++;
        frea=1;
        if( n==1 || (arr[n-1] != arr[n-2]))
        cout<<arr[n-1]<<" "<<frea;
    }
}

int main()
{
    int arr[]={10,10,10,25,30,30};
    int n=6;
    Freq(arr,n);
    return 0;
}