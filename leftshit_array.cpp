#include<iostream>
using namespace std;
void left(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
     arr[i]=arr[i+1];
    arr[n-1]=temp;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    cout<<"THe array is = ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    left(arr,n);
    cout<<"The removed list is = ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}