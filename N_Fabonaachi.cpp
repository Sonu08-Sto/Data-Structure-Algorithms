#include<iostream>
using namespace std;

void NFabonaachi(int n,int m)
{
    int arr[m]={0};
    arr[n-1]=1;
    arr[n]=1;

    for(int i=n+1;i<m;i++)
    arr[i]=2*arr[i-1]-arr[i-n-1];

    for(int x : arr)
    cout<<x<<" ";
    
}

int main()
{
    int n=3;
    int m=15;
    NFabonaachi(n,m);
    return 0;
}