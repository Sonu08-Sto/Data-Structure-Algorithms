#include<iostream>
#include<map>
using namespace std;

void FindGreater(int arr[],int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    int cap_feq=0;
    for(auto it=m.rbegin();it != m.rend();it++)
    {
        int fre=it->second;
        it->second=cap_feq;
        cap_feq += fre;
    }
    for(int i=0;i<n;i++)
    cout<<m[arr[i]]<<" ";
}

int main()
{
    int arr[]={10,5,8,20,30,8};
    int n=6;
    FindGreater(arr,n);
    return 0;
}