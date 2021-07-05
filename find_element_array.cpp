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
    int word;
    cout<<"Enter the Element you want to find=";
    cin>>word;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==word)
        cout<<"Element "<<word<<" is present in the array";
    }
    return 0;
}