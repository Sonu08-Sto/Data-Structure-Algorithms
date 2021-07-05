#include<iostream>
using namespace std;
int main()
{
    int size,count=0;
    int result1=0,result2=0;
    int *arr = new int(size);
    int c=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the Size of Array =";
    cin>>size;
    cout<<"Enter the "<<size<<" Elements one by one = ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        count++;
    }

    cout<<count<<endl;
    cout<<c;
}