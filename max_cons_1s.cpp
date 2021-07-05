#include<iostream>
using namespace std;

int MaxCon(int arr[],int n)
{
    int count=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            res=max(res,count);
        }
        else
        count=0;
    }
    return res;
}

int main()
{
    int arr[]={0,1,1,0,1,0};
    int n=6;
    cout<<MaxCon(arr,n);
    return 0;
}