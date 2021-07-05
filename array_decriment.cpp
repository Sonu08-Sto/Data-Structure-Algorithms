#include<iostream>
using namespace std;
int main()
{
    int size;
    int result1=0,result2=0;
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
       if(arr[i]>result1)
       result1=arr[i];
    }
    for(int i=0;i<size;i++)
    {
       if(arr[i]>result2)
            if(arr[i]==result1)
            continue;
        result2=arr[i];
    }
    cout<<result1<<" "<<result2;
    return 0;
}