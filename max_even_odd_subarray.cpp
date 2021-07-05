#include<iostream>
using namespace std;

int MaxEO(int arr[],int n)
{
    int res=1;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i-1]%2 != 0 || arr[i]%2 !=0 && arr[i-1]%2 == 0 )
        {
            count++;
            res=max(count,res);
        }
        else
        count=1;
    }
    return res;
}

int  main()
{
    int arr[]={10,12,14,17,8};
    int n=5;
    cout<<MaxEO(arr,n);
    return 0;
}