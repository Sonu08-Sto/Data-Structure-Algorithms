#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n;
    cout<<"Enter the Number = ";
    cin>>n;
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<n)
        count++;
    }
    cout<<count;
    return 0;
}