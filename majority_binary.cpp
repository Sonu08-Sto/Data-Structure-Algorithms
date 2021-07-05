#include<iostream>

using namespace std;

int majority(int arr[],int N)
{
    int count=1,i;
    int res=0;
    for(i=1;i<N;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else
        count--;

    if(count==0)
    {
        count=1;
        res=i;
    }
    }

    count=0;
    for(i=0;i<N;i++)
    {
        if(arr[res]==arr[i])
        count++;
    }
    if(count <= N/2)
    return -1;
    else 
    return arr[res];

}

int main()
{
    int arr[]={1,7,7,7,7,7,1,4};
    int N=8;
    cout<<majority(arr,N);
    return 0;
}