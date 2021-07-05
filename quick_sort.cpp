#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
    
}

void quickSort(int arr[],int l,int h)
{
    if(h>l)
    {
        int p=partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

int main()
{
    int a[]={10,5,30,15,7};
	int l=0,r=4;
	
	quickSort(a,l,r);
	for(int x: a)
	    cout<<x<<" ";
}