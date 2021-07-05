#include<iostream>
using namespace std;

int Window(int arr[],int n,int sum)
{
    int curr_sum=arr[0];
    int s=0,i;
    for(i=1;i<n;i++)
    {
        while(curr_sum > sum && (i-1 > s))
        {
            curr_sum -= arr[s];
            s++;
        }
        if(curr_sum == sum)
        {
        cout<<"Sum is found";
        return 1;
        }
        if(i < n)
        curr_sum += arr[i];
    }
    cout<<"Not found SUm ";
}

int main()
{
    int arr[]={9,4,20,7,10,9};
    int k=33;
    int n=6;
    Window(arr,n,k);
    return 0;
}