#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
    int p=arr[l];
    int i=l-1;
    int j=h+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<p);
        do{
            j--;
        }while(arr[j]>p);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);
    }
}

void quickSort(int arr[],int l,int h)
{
    if(h>l)
    {
        int p=partition(arr,l,h);
        quickSort(arr,l,p);
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