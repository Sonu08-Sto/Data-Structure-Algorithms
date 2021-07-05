#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    cout<<"Enter the position of the number = ";
    int n;
    cin>>n;
    for(int i=0;i<4;i++)
    {
        if(i==n-1)
        cout<<arr[i];
    }
    return 0;
}