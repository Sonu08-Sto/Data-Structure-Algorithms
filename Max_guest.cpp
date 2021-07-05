#include<iostream>
#include<algorithm>
using namespace std;

int MaxGuest(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int count=1,res=1,i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i] <= dep[j])
        {
            count++;
            i++;
        }
        else 
        {
            count--;
            j++;
        }
        res=max(res,count);
    }
    return res;
}

int main()
{
    int arr[]={800,700,600,500};
    int dep[]={840,820,830,530};
    int n=4;
    cout<<MaxGuest(arr,dep,n);
    return 0;
}