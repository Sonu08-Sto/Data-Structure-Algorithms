#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<=9-2;i++)
    {
      int temp;
      temp=arr[i];
      arr[i]=arr[i+2];
      arr[i+2]=temp;  
    }
    for(int i=0;i<=9-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}