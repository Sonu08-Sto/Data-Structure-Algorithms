#include<iostream>
using namespace std;

bool TwoPointerApproach(int arr[],int n,int i,int x)
{
    int l=i;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[l]+arr[h]==x)
        return true;
        else if(arr[l]+arr[h]>x)
        h--;
        else
        l++;
    }
    return false;
}

bool ThreePointerApproach(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(TwoPointerApproach(arr,n,i+1,x-arr[i]))
        return true;
    }
    return false;

}

int main()
{
    int arr[]={2,3,4,8,9,20,40};
    int n=7;
    int x=32;
    cout<<ThreePointerApproach(arr,n,x);
    return 0;
}