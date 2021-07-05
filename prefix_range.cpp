#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxEle(int l[],int r[],int n)
{
    int arr[1000]={0};
    for(int i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int sum=arr[0];
    int res=0;a
    for(int i=1;i<1000;i++)
    {
        arr[i] +=arr[i-1];
        if(sum<arr[i])
        {
          sum=arr[i];
          res=i;
        }
    }
    return res;
}

int main()
{
    int l[]={1,2,3};
    int r[]={3,5,7};
    int n=3;
    cout<<MaxEle(l,r,n);
    return 0;
}