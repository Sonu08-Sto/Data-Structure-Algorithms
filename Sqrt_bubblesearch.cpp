#include<iostream>
using namespace std;

long long int sqrrt(long long int x)
{
    int low=1;
    int high=x;
    int ans=-1;
    while(low<=high)
    {
        long long int mid=(low+high)/2;
        long long int sqrt=mid*mid;
        if(mid==x)
        {
            return mid;
        }
        else if(sqrt<x)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return  ans;
}

int main()
{
    long long int n;
    cout<<"Enter the number you want to take root = ";
    cin>>n;
    cout<<sqrrt(n);
    return 0;
}