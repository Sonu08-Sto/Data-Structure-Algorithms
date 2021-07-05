#include<iostream>
#include<unordered_map>
using namespace std;

int LongestSubarray(int arr[],int n,int sum){
    unordered_map<int,int> m;
    int res=0,mx=0;
    for(int i=0;i<n;i++){
        res += arr[i];
        if(res == sum)
        return  i+1;

        if(m.find(res-sum)!=m.end())
        mx=max(mx,i-m[res-sum]);

        if(m.find(res)==m.end())
        m.insert({res,i});
    }
}

int main(){
    int arr[]={3,1,0,1,8,2,3,6};
    int sum=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<LongestSubarray(arr,n,sum);
    return 0;
}