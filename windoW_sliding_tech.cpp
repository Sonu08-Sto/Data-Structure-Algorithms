#include<iostream>
using namespace std;

int Window(int arr[],int n,int k)
{
    int curr_sum=0;
    int max_sum=0;
    for(int i=0;i<k;i++)
    curr_sum += arr[i];
    max_sum=curr_sum;

    for(int i=k;i<n;i++)
    {
        curr_sum += (arr[i]-arr[i-k]);
        max_sum=max(curr_sum,max_sum);
    }
    return max_sum;
}

int main()
{
    int arr[]={1,8,30,-5,20,7};
    int k=3;
    int n=6;
    cout<<Window(arr,n,k);
    return 0;
}