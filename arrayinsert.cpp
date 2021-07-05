#include<iostream>
using namespace std;
int main()
{
    int size;
    int pos ,number;
    int *arr = new int(size);
    cout<<"Enter the Size of Array =";
    cin>>size;
    cout<<"Enter the "<<size<<" Elements one by one = ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the position that you want to inster a number = ";
    cin>>pos;
    cout<<"Enter the number = ";
    cin>>number;
    size++;
    for(int i=size-1;i>=pos-1;i--)
    arr[i+1]=arr[i];
    arr[pos-1]=number;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}