#include<iostream>
#include<unordered_map>
using namespace std;

void NByK(int arr[],int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    for(auto x : m){
        if(x.second>n/k)
        cout<<x.first<<" ";
    }
}

int main(){
    int arr[]={30,10,20,20,10,20,30,30};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    NByK(arr,n,k);
    return 0;
}