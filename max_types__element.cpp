#include<iostream>
#include<unordered_set>
using namespace std;

int Maxi(int arr[],int n,int k)
{
    unordered_set<int> us;
    for(int i=0;i<n;i++)
    us.insert(arr[i]);
    int d=us.size();
    if(d>= n/k)
    return n/k;
    else
    return d;
}

int main()
{
    int arr[]={1,1,2,1,3,1};
    int n=6;
    int k=2;
    cout<<Maxi(arr,n,k);
    return 0;
}