#include<iostream>
#include<unordered_map>
using namespace std;

int Length(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        temp[i]=-1;
        else
        temp[i]=arr[i];
    }                  

    unordered_map<int,int> m;
    int sum=0;
    int res=0;
    for(int i=0;i<n;i++){
        sum+=temp[i];
        if(sum==0)
        res=i+1;
        if(m.find(sum)!=m.end())
        res=max(res,i-m[sum]);
        else
        m[sum]=i;
    }
    return res;
}

int main(){
    int arr[]={1,0,1,1,1,0,0,0};
    int n=8;
    cout<<Length(arr,n);
    return 0;
}