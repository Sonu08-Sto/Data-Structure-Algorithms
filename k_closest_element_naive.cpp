#include<bits/stdc++.h>
using namespace std;

void KClosest(int arr[],int n,int k,int x){
    bool visited[n]={false};
    for(int i=0;i<k;i++){
        int max_diff=INT_MAX;
        int mini=0;
        for(int j=0;j<n;j++){
            if(visited[j]==false && abs(arr[j]-x) <= max_diff){
                max_diff=arr[j]-x;
                mini=j;
            }
        }
        cout<<arr[mini]<<" ";
        visited[mini]=true;
    }
}

int main(){
    int arr[]={10,15,7,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    KClosest(arr,n,2,x);
    return 0;
}