#include<iostream>
#include<vector>
using namespace std;

vector<int> smaller(int arr[],int n,int k)
{
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k)
        res.push_back(arr[i]);
    }
    return res;
}
int main()
{
    int arr[]={54,25,4,57,96,25,48};
    int N=7;
    int k;
    cout<<"the array is = ";
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Enter the value of K = ";
    cin>>k;
    vector<int> res=smaller(arr,N,k);
    for(int x : res)
    cout<<x<<" ";
    return 0;
}