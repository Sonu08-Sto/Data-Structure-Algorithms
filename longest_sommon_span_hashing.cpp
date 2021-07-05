#include<iostream>
#include<unordered_map>
using namespace std;

int LongestCommonSpan(int arr[],int brr[],int n){
    int temp[n];
    for(int i=0;i<n;i++)
    temp[i]=arr[i]-brr[i];

    unordered_map<int,int> m;
    int presum=0,mx=0;
    for(int i=0;i<n;i++){
        presum += temp[i];
        if(presum == 0)
        mx= i+1;
        if(m.find(presum) != m.end())
        mx=max(mx,i-m[presum]);
        else
        m[presum]=i;
    }
    return mx;
}

int main(){
    int arr[]={0,1,0,0,0,0};
    int brr[]={1,0,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<LongestCommonSpan(arr,brr,n);
    return 0;
}