#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"The reverse of the areear is = ";
    int low=0;
    int last=4;
    while(low<last)
    {
    int temp=arr[low];
    arr[low]=arr[last];
    arr[last]=temp;
    low++;
    last--;
    }
    for(int i=0;i<5;i++)
    cout<<arr[i];
}