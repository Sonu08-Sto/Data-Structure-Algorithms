#include<set>
#include<iostream>
using namespace std;

void RightCeiling(int arr[],int n)
{
    int res[n];
    set<int> s;
    for(int i=n-1;i>=0;i--)
    {
        auto it=s.lower_bound(arr[i]);
        if(it == s.end())
        res[i]=-1;
        else
        res[i]=*it;
        s.insert(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}

int main()
{
    int arr[]={10,100,200,30,120,120};
    int N=6;
    RightCeiling(arr,N);
    return 0;
}