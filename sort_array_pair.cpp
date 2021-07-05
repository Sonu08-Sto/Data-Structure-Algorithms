#include<iostream>
#include<algorithm>
using namespace std;

void Sortpair(int arr[],char aer[],int n)
{
    pair<int,char> p[n];
    for(int i=0;i<n;i++)
    p[i]={arr[i],aer[i]};
    sort(p,p+n);
    for(int i=0;i<n;i++)
    cout<<p[i].second<<" ";
}

int main()
{
    int arr[]={3,2,1};
    char aer[]={'G','F','E'};
    int N=3;
    Sortpair(arr,aer,N);
}