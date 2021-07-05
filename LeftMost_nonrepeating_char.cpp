#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LeftMost(string str){
    int n=str.length();
    int arr[256];
    fill(arr,arr+256,-1);
    for(int i=0;i<n;i++){
        int fi=arr[str[i]];
        if(fi == -1)
        arr[str[i]]=i;
        else
        arr[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<256;i++){
        if(arr[i]>0)
        res=min(res,arr[i]);
    }
    return (res==INT_MAX)?-1:res;
}

int main(){
    string str="geeks for geeks";
    cout<<LeftMost(str);
    return 0;
}