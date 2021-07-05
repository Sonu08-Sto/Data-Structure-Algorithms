#include<iostream>

using namespace std;

int main()
{
    int size;
    int *arr=new int(size);
    int result1=0,result2=0;
    cout<<"Enter the size of array=";
    cin>>size;
    cout<<"Enter the elements of array one by one =";
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
        {
            if(arr[i]==result1)
            {
                continue;
            }
            result2=arr[i];
        }
    }
    cout<<"RESULT="<<result1<<endl;
    cout<<"RESULT2="<<result2;
}