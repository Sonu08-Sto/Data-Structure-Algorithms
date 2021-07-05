#include<iostream>

using namespace std;

template <typename T>

T getmax(T arr[],T n)
{
    T res=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
        res=arr[i];
    }
    return res;
}

int main()
{
    int arr[]={1,2,3,4,7,8,10,54};
    int N=8;
    cout<<getmax<int>(arr,N);
} 