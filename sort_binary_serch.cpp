#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[7]={5,6,9,8,7,9,10};
    sort(arr,arr+7);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    if(binary_search(arr,arr+7,4))
    cout<<"4 is present int the array ";
    else 
    cout<<"4 is not present in the arry ";
    return 0;
}