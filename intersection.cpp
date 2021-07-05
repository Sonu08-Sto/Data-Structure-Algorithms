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
        else if(arr[i] < brr[j]){ i++; }
        else if(arr[i] > brr[j]){ j++; }
        else
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        
    }
}

int main()
{
    int arr[]={3,5,10,10,10,15,15,20};
    int brr[]={5,10,10,15,30};
    int n=8;
    int m=5;
    Mini(arr,brr,n,m);
    return 0;
}