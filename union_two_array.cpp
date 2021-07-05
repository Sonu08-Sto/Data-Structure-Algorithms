#include<iostream>
#include<algorithm>
#include<bits\stdc++.h>

using namespace std;

int Mini(int arr[],int brr[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr[i] == arr[i-1])
        {
            i++;
            continue;
        }
        else if(brr[j] == brr[j-1])
        {
            j++;
            continue;
        }
        else if(arr[i] < brr[j])
        {
            cout<<arr[i]<<" ";
            i++;
        }
        else if(arr[i] > brr[j])
        {
            cout<<brr[j]<<" ";
            j++;
        }
        else if(arr[i] == brr[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        if(i>0 && arr[i] != arr[i-1])
        {
        cout<<arr[i]<<" ";
        i++;
        }
    }
    while (j < m)
    {
        if(j>0 && brr[j] != brr[j-1])
        {
        cout<<brr[j]<<" ";
        j++;
        }
    }
}


int main()
{
    int arr[]={3,5,8};
    int brr[]={2,8,9,10,15};
    int n=3;
    int m=5;
    Mini(arr,brr,n,m);
    return 0;
}