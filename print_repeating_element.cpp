#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int arr[]={10,8,7,10,7,6};
    unordered_set<int> us;
    for(int i=0;i<6;i++)
    {
        if(us.find(arr[i])==us.end())
        us.insert(arr[i]);
        else
        cout<<arr[i]<<" ";
    }
}